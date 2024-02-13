#include<stdio.h>
#include"header.h"
//function for taking input in structure
void accept(struct SymbolDecoder *s, int n){
    for (int i = 0; i < n; i++)
    {
        printf("Mystical Symbol %d: ",i+1);
        getchar();
        scanf("%c",&s[i].symbol);
        for (int k = 0; k < i; k++)
        {
            if (s[i].symbol==s[k].symbol)
            {
                printf("Enter unique symbols only\n");
                return;
            } 
        }
        printf("Numeric value %d: ",i+1);
        scanf("%d",&s[i].value);
        if (s[i].value<0)
        {
            printf("Enter positive numbers only\n");
            return;
        }
    }
}
//function for searching
void search(struct SymbolDecoder *s, int n){
    printf("Enter the mystical symbol to decode: ");
    char sym;
    getchar();
    scanf("%c",&sym);
    for (int j = 0; j < n; j++)
    {
        if (sym==s[j].symbol)
        {
            printf("The numeric value %d\n",s[j].value);
        }
                
    }
}