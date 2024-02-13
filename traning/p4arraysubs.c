#include<stdio.h>
void display(int [], int );
int main(){
    int m[5]={1,2,3,4,5};
    display(m, 5);
    return 0;
}
void display(int k[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",k[i]);    
    }
    
}