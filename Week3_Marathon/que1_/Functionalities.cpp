#include "Functionalities.h"

int num1 = 0;
int num2 = 0;
bool flag = false;
std::condition_variable cv;
std::mutex mt;


void SumOfTwoDigits(){
    std::unique_lock<std::mutex> ul(mt);
    cv.wait( ul, [](){ return flag; } );
    std::cout << "Sum of " << num1 << " and " << num2  << " is: " << num1 + num2 << "\n";
}


void SumOfFirstNNumbers(int N)
{
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += i;
    }
    mt.lock();
    std::cout << "Sum of first " << N << " numbers: " << sum << "\n";
    mt.unlock();
}

void DisplayOddNumbers(std::vector<int> v){
    
    std::lock_guard<std::mutex> lk(mt);
    std::cout << "Vector of odd numbers : \n[ ";
    for(int val : v){
        if (val%2 == 1)
        {
            std::cout << val << " ";
        }
        
    }
    std::cout << " ]" << "\n";
}


void InstantiateThreads(
    std::array<std::thread, 3>& threadarr,
    std::function< void() > f1,
    std::function< void(int) > f2,
    std::function< void(std::vector<int>)> f3,
    int N,
    std::vector<int> vec){
    
        threadarr[0] = std::thread(f1);
        threadarr[1] = std::thread(f2, N);
        threadarr[2] = std::thread(f3, vec);
}

void JoinThreads(std::array<std::thread, 3>& threadarr){
    for(std::thread& t : threadarr){
        if(t.joinable()){
            t.join();
        }
    }
}



int main(){

    std::array<std::thread, 3> threadarr;
    int N = 5;
    std::vector<int> vec{1, 2, 3, 5, 6, 7};
    InstantiateThreads(threadarr, &SumOfTwoDigits, &SumOfFirstNNumbers, &DisplayOddNumbers, std::ref(N), std::ref(vec));

    std::cin >> num1 >> num2;
    flag = true; 
    cv.notify_one();
    

    JoinThreads(threadarr);


}