#include<stdio.h>
//Fuction for counting pizzza
//which takes Budget as a input
void countPizzas(int b){
    int sum=0, cost, veg=0, nonveg=0;//veg and nonveg stores the numbers of pizzas
    while (sum<b)
    {
        printf("Enter the cost of pizza(Rs 5 or 10): ");
        scanf("%d",&cost);
        if (cost==5)
        {
            sum+=5;
            veg++;
        }
        else if (cost==10)
        {
            sum+=10;
            nonveg++;
        }
        else
        {
            printf("Invalid pizza cost\n");
        }
    }
    printf("\nPizza Party budget: %d\n",b);
    printf("Non-Veg pizza: %d\n",nonveg);
    printf("Veg Pizza: %d\n",veg);
}
int main(){
    int budget;
    printf("Enter the Initial Budget: ");
    scanf("%d",&budget);
    //checking if budget is negaTIVE
    if (budget<0)
    {
        printf("Budget cant be Negative");
    }
    else
    {
        countPizzas(budget);
    }
    return 0;
}