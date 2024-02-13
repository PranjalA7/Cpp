#include<stdio.h>
//Function
int check(int length,int breadth){
    if (length*breadth>2*(length+breadth))
        return 1;
    return 0;
}
int main(){
    int length, breadth;
    printf("Enter length & breadth of a rectangle: ");
    scanf("%d%d",&length,&breadth);
    if (check(length,breadth))
    {
        printf("Area of given rectangle is greater than perimeter.\n ");
    }
    else
    {
        printf("Perimeter of given rectangle is greater than area.\n");
    }
    return 0;
}