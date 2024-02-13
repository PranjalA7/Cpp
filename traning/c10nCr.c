#include<stdio.h>
long int fact(int num){
    if(num>=1){
        return num*fact(num-1);
    }
    else{
        return 1;
    }
}
long int ncr(int n,int r){
    int res=fact(n)/(fact(r)*fact(n-r));
    return res;
}
int main(){
    printf("Enter n and c: ");
    int n,r;
    scanf("%d%d",&n,&r);
    int ans=ncr(n,r);
    printf("%d\n",ans);
    return 0;

}