#include"header.h"

int main(){
    FnContainer FVector1, FVector2;
    CreateFuncVec1(FVector1);
    CreateFuncVec2(FVector2);

    DataContainer D1{10, 20, 30};
    DataContainer D2{1, 2, 3};

    Set Set1(FVector1, D1);
    Set Set2(FVector2, D2);

    Set1();
    Set2();
}

