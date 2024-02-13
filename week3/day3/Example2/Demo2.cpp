#include <vector>
#include <iostream>
#include <optional>

void TakeInput(std::vector<int>& data, int N){
    int val  = -1;

    for (int i = 0; i < N; i++)
    {
        std::cin >> val;
        data[i] = val;
    }    
    
}

/*
    identify even numbers from data store them in result

    scenario 1: there is at least 1 even number in data,
                you identify the numbers store in result
    scenario 2: data is empty handle by raising exception

    scenario 3: data is not empty however all numbers are ODD

*/

//ReturnEvenNumbers MAY OR MAY NOT RETURN A VALUE

std::optional<std::vector<int>> ReturnEvenNumbers(std::vector<int>& data){
    if(data.empty()){
        throw std::runtime_error("Error as data is empty");
    }
    std::vector <int> result;

    for(int v : data){
        if(v % 2 == 0){
            result.push_back(v);
        }
    }
    if(result.empty()){
        return std::nullopt; //nullopt is a symbol to idicate no value
    }

    return result;
}

int main() {

    int N = -1;
    std::cin >> N;
    std::vector<int> V1(N); //space for N integeres is now reserved on the heap
    std::vector<int> data(N);

    TakeInput(data, N);

    std::optional<std::vector<int>> even_numbers = ReturnEvenNumbers(data);
    
    /*
        has_value returns false if optional wrapper contains nullopt
    */
    if (even_numbers.has_value()){
        std::cout << even_numbers.value().size() << "\n";
        for(int v : even_numbers.value()){
            std::cout << v << " ";
        }
        std::cout << "\n";
    }
    else{
        std::cout << "Vector returned no values" << "\n";
    }

}
