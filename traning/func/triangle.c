#include<stdio.h>
int triangle(int a, int b, int c){
    if (a+b+c==180)
    {
        return 1;
    }
    return 0;
}
int main(){
    int a, b, c;
    printf("Enter the angles of a triangle: ");
    scanf("%d%d%d",&a,&b,&c);
    if(triangle(a,b,c)){
        printf("It is a Triangle.\n");
    }
    else{
        printf("It is not a Triangle.\n");
    }
    return 0;
}