#include <array>
#include <iostream>

const int R = 2;
const int C = 2;

void CreateMatrix(std::array< std::array<int, R>, C>& arr){
    
    for (int i = 0; i < R; i++)
    {
        int val = 0;
        for (int j = 0; j < C; j++)
        {
            std::cin >> val;
            arr[i][j] = val;
        }
    }
}

//function1
auto SumOfEachRow = [](std::array< std::array<int, R>, C> Matrix){
    
    for (int i = 0; i < R; i++)
    {
        int sum = 0;

        for (int j = 0; j < C; j++)
        {
            sum = sum + Matrix[i][j];
        }

        std::cout << sum << "\n";
    }
};

//function2
auto HighestValueInMatrix = [](std::array< std::array<int, R>, C> Matrix){
        
    int max = Matrix[0][0];
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (max < Matrix[i][j])
            {
                max = Matrix[i][j];
            }
        }
    }
    std::cout << max << "\n";
};

//function3 
auto SquareOfLastNumber = [](std::array< std::array<int, R>, C> Matrix){
    std::cout << Matrix[R-1][C-1] * Matrix[R-1][C-1] << "\n";
};

auto MaximumNumberOfEachColumn = [](std::array< std::array<int, R>, C> Matrix){
    for (int i = 0; i < R; i++)
    {
        int max = Matrix[0][0];

        for (int j = 0; j < C; j++)
        {
            if (max < Matrix[j][i])
            {
                max = Matrix[j][i];
            }
        }
        std::cout << max << "\n";
    }
};


