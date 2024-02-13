#include<stdio.h>
#include<stdlib.h>
int main(){
    float num;
    printf("Enter a Number: ");
    scanf("%f",&num);
    printf("Absolute value of %f is %d",num, abs(num));
    return 0;
}