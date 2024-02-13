#include<stdio.h>
#include"header.h"
int main(){
    int number;
    printf("Enter the number:");
    //number input
    scanf("%d",&number);
    int c=puzzleAdv(number);
    //switch case for different operations
    switch (c)
    {
    case 1:
        printf("%d\n",oned(number));
        break;
    case 2:
        printf("%d\n",twod(number));
        break;
    case 3:
        printf("%d\n",threed(number));
        break;
    case 4:
        printf("%d\n",fourd(number));
        break;
    default:
        printf("Invalid number\n");
        break;
    }
    return 0;
}