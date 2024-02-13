
#include "Functionalities.h"

int main(){
    
    std::array< std::array<int, R>, C> Matrix;

    CreateMatrix(Matrix);

    std::cout << "Sum of Each row : \n";
    SumOfEachRow(Matrix);
    std::cout << "Highest value in matrix: \n";
    HighestValueInMatrix(Matrix);
    std::cout << "Square of the last Number: \n";
    SquareOfLastNumber(Matrix);
    std::cout << "Maximum of each column: \n";
    MaximumNumberOfEachColumn(Matrix);

}