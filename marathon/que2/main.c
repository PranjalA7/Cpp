#include<stdio.h>
#include"header.h"
int main(){
    int arr[]={1,2,2,6,7};
    printf("Enter New coin : ");
    int ncoin;
    scanf("%d",&ncoin);
    int ans=fndcoin(arr,ncoin);
    printf("%d\n",ans); 
    return 0;
}

