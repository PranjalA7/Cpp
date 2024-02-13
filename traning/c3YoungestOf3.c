#include<stdio.h>
int main(){
    int ram, shyam, ajay;
    printf("Enter ages of Ram, Shyam and Ajay:\n");
    scanf("%d%d%d",&ram,&shyam,&ajay);
    if (ram<shyam && ram<ajay)
    {
        printf("Ram is youngest.");
    }
    else if (shyam<ajay)
    {
        printf("Shyam is youngest.");
    }
    else
    {
        printf("Ajay is youngest.");
    }
    
    
    return 0;
}