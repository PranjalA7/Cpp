#include<stdio.h>
#include"header.h"
int main(){
    //array to be sorted
    int arr[]={7,2,9,1,5,5,8,3,4,11};
    int magicn;
    //Taking input of magic number
    printf("Enter Magic number: ");
    scanf("%d",&magicn);
    int ans=ModifyArray(arr,magicn,10);
    printf("\n%d\n",ans);
    return 0;
}