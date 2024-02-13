#include<stdio.h>
#include<stdlib.h>
#include"header.h"
int main(){
    int num,choice,i=0;
    printf("enter the no of students: ");
    scanf("%d",&num);
    struct student *s;
    s=(struct student *) malloc(num*sizeof(struct student));
    
    do
    {
        printf("Enter the choice 1.add 2.display 3.search 4.modify 5.exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            if (i<num)
            {
                accept(s,i);
                i++;
            }
            else
            {
                printf("Stack is full\n");
            }
            break;
        case 2:
            if (i==0)
            {
                printf("stack is empty\n");
            }
            else
            {
                display(s,i);
            }
            break;
        case 3:
            if (i==0)
            {
                printf("stack is empty");

            }
            else
            {
                search(s,num);
            
            }
            break;
        case 4:
            if (i==0)
            {
                printf("stack is empty");
            }
            else{
                modify(s,num);
            }
            break;
        }
        
    } while (choice);
    
    
    return 0;
}