#include <stdio.h>
int main()
{   
    char ch;
    scanf("%c",&ch);
    
    if (ch>='A'&&ch<='Z'){
        char alphabet=ch+32;
        printf("%c\n",alphabet);

    }
    else
    {
        char alphabet=ch-32;
        printf("%c\n",alphabet);
    }
    return 0;
}