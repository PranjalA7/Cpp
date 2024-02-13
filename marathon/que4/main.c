#include<stdio.h>
#include<stdlib.h>
#include"header.h"

int main(){
    //size of array
    int n;
    printf("Enter the number of symbols: ");
    scanf("%d",&n);
    if (n>10)
    {
        printf("Enter size less than 10 only.");
        return 0;
    }
    struct SymbolDecoder *s=(struct SymbolDecoder *)malloc(sizeof(struct SymbolDecoder ) *n);
    accept(s,n);
    search(s,n);
    free(s);
    return 0;
}