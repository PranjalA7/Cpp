#include<stdio.h>
struct SymbolDecoder
{
    char symbol;
    int value;
};

void accept(struct SymbolDecoder *, int );
void search(struct SymbolDecoder *, int );
