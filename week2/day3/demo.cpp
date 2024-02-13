#include <curl/curl.h>
#include <iostream>
#include<cstring>



size_t writeFunction(void *ptr, size_t size, size_t nmemb, std::string* data) {
    data->append((char*) ptr, size * nmemb);
    return size * nmemb;
}

int main(){

    const char* end_point = "https://min-api.cryptocompare.com/data/price?fsym=BTC&tsyms=USD,JPY,EUR\0";
    //initialize curl session object
    auto curl = curl_easy_init();
    //if object was initiated correctly
    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, end_point);
                
        std::string response_string;
        
        std::string header_string;

        /*
            we need a func that can read response recieve and write it
            (byte-by-byte) int response_string
            this func (writeFunction is define above)
        */

        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, writeFunction);

        //specify where data has to be written (address of response string)
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response_string);
        //specify where header data comes from (location of header_string)
        curl_easy_setopt(curl, CURLOPT_HEADERDATA, &header_string);
        
        /*
        store response code after execution of api call in this variable
        
        */

        long response_code;
        double elapsed;

        /*
            after all settings above, finally execute curl
            with on all options provided
        */

        curl_easy_perform(curl);

        /*
            gather info on response code store it in response_code variable location
            Similarly we store elapsed time in its respective variable location
        */
        curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &response_code);
        curl_easy_getinfo(curl, CURLINFO_TOTAL_TIME, &elapsed);
        
        

        /*
            clean up session reset everything before next request is to be made
        */

        curl_easy_cleanup(curl);

        /*
            session can be terminated by setting curl session object to NULL
        */
        curl = NULL;

        std::cout << response_string << "\n";
        std::cout << response_code << "\n";
        std::cout << elapsed << "\n";
    }

}
