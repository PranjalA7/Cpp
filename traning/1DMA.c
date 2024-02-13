#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    int *p=NULL;
    
    printf("Enter size of array ");
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    printf("Enter %d elements",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&p[i]);
    }
    printf("array elements:\n");
    for (int j = 0; j < n; j++)
    {
        printf("%d\n",p[j]);
    }
    
    free(p);
    printf("array elements:\n");
    for (int j = 0; j < n; j++)
    {
        printf("%d\n",p[j]);
    }
    
    return 0;
}