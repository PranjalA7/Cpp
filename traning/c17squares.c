#include<stdio.h>
int squ(int n){
    return n*n;
}
int main(){
    for (int i = 2; i <= 8; i++)
    {
        printf("%d\n",squ(i));
    }
    
    return 0;
}