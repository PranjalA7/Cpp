#include<stdio.h>
int fact(int num){
    if(num>0){
        return num*fact(num-1);
    }
    else{
        return 1;
    }
}
int main(){
    printf("enter a number ");
    int n;
    scanf("%d",&n);
    printf("%d",fact(n));
    return 0;
}