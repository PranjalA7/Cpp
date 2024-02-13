#include <iostream>

int main(){

    int n1 = 10;
    int& ref1 = n1;

/*
    if we try to make reference of reference we end up creating another reference of original variable

    1) references physically dont exist
    2) references cannot be put in a container
    3) reference of reference does not work as intended
*/

    //int& arr[1] {ref1};
    int& ref2 = ref1;
}