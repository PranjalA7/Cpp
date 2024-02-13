#include<stdio.h>
int main(){
    int cost, sell, pl;
    printf("Enter cost price & selling price: ");
    scanf("%d%d",&cost, &sell);
    if (cost<sell)
    {
        pl=sell-cost;
        printf("Profit: %d", pl);
    }
    else
    {
        pl=cost-sell;
        printf("Loss: %d", pl);
    }
    return 0;
}