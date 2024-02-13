#include<stdio.h>
void calcavg(int *, int );
int main(){
    int m[5]={1,2,3,4,5};
    calcavg(m, 5);
    return 0;
}
void calcavg(int *p, int n){
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=*(p+i);
    }
    float avg = (float)sum/n;
    printf("AVG: %f",avg);
    printf("size: %lu",sizeof(p));
}