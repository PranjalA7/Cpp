#include<stdio.h>
void accept(int *,int *, int *);
int main(){
    int d, m, y;
    accept(&d,&m,&y);
    printf("%d/%d/%d",d,m,y);
    return 0;
}
void accept(int *p,int *q, int *r){
    printf("Enter day, month,year:\n")
    scanf("%d%d%d",p,q,r);
}