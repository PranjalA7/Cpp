#include<stdio.h>
void calculate(int r, int *p,int *q){
    *p=3.14*r*r;
    *q=2*3.14*r;
}
int main(){
    floa area, peri;
    calculate(5,&area,&peri);
    printf("area: %d\nperimeter: %d\n",area, peri);
    return 0;
}