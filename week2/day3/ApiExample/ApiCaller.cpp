#include "ApiCaller.h"
#include <cstring>
#include <string>
ApiCaller::ApiCaller(std::string url)
    : _response {std::make_shared<Response>()},
      _curl_session_object_handle(curl_easy_init()) {
        strcpy(_end_point, url.c_str());
      }

/*
    takes url and header params from user
    Uses delegation to call the constructor above and assigns header to _request_header
*/


ApiCaller::ApiCaller(std::string url, std::string header)
    : ApiCaller(url)
{
    _request_header = header;
}

void ApiCaller::ExecuteApiCall()
{

    curl_easy_setopt(_curl_session_object_handle, CURLOPT_URL, _end_point);
    /*
            after all settings above, finally execute curl
            with on all options provided
    */

    curl_easy_perform(_curl_session_object_handle);

    /*
            we need a func that can read response recieve and write it
            (byte-by-byte) int response_string
            this func (writeFunction is define above)
        */
        curl_easy_setopt(_curl_session_object_handle, CURLOPT_WRITEFUNCTION, 
            [](void *ptr, size_t size, size_t nmemb, std::string* data) {
                data->append((char*) ptr, size * nmemb);
                return size * nmemb;}
        );

        //specify where data has to be written (address of response string)
        curl_easy_setopt(
            _curl_session_object_handle, //session handle
            CURLOPT_WRITEDATA, //name of setting (option being used)
            _response->responseAdd() //accessing _response_string variable through
        );

        //specify where header data comes from (location of header_string)
        curl_easy_setopt(
            _curl_session_object_handle, 
            CURLOPT_HEADERDATA, 
            &_request_header
            );

        /*
            after all settings above, finally execute curl
            with on all options provided
        */

        curl_easy_perform(_curl_session_object_handle);
}

std::ostream &operator<<(std::ostream &os, const ApiCaller &rhs) {
    os << "_end_point: " << rhs._end_point
       << " _response: " << rhs._response;
    return os;
}
