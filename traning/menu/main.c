#include<stdio.h>
#include<stdlib.h>
#include"header.h"

int main()
{
    int num,choice,i=0;
    printf("\n Enter number of students ");
    scanf("%d",&num);
    struct Student *s=(struct Student*)malloc(num*sizeof(struct Student));

    do
    {
        printf("\n MENU 1.ADD 2.DISPLAY 3.SEARCH 4.MODIFY 5.EXIT");
        printf("\n Enter choice ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                if(i<num)
                {
                    accept(s,i);
                    ++i;
                }
                else{
                    printf("\n Stack full ");
                }
                break;
            case 2:
                if(i==0)
                {
                    printf("\n Stack is empty");
                }
                else{
                    display(s,i);//i means current number of records
                }
                break;
             case 3:
                if(i==0)
                {
                    printf("\n Stack is empty");
                }
                else{
                    search(s,i);//i means current number of records
                }
                break;
             case 4:
                if(i==0)
                {
                    printf("\n Stack is empty");
                }
                else{
                    modify(s,i);//i means current number of records
                }
                break;
        }
        
    } while (1);
    


    // int *p=NULL;
    // struct Student s1={ 1011,"Jay",98.55f,PRIMARY };
    // struct Student s3;

    // printf("\n %d  %s  %f ",s1.rollno,s1.name,s1.percentage);
    // switch(s1.catg)
    // {
    //     case PRIMARY:
    //         printf("\n U r Primary Student ");
    //         //p=(int*)malloc(5*sizeof(int));
    //         break;
    //     case SECONDARY:
    //         printf("\n U r Secondary Student ");
    //         break;
    // }

    // printf("\n Enter rollno ");
    // scanf("%d",&s3.rollno);
    // printf("\n Enter name ");
    // scanf("%s",s3.name);
    // printf("\n Enter percentage ");
    // scanf("%f",&s3.percentage);
    // printf("\n Enter Category 0.PRIMARY 1.SECONDARY");
    // scanf("%d",&s3.catg);
    //  printf("\n %d  %s  %f ",s3.rollno,s3.name,s3.percentage);
    // switch(s3.catg)
    // {
    //     case PRIMARY:
    //         printf("\n U r Primary Student ");
    //         //p=(int*)malloc(5*sizeof(int));
    //         break;
    //     case SECONDARY:
    //         printf("\n U r Secondary Student ");
    //         break;
    // }

    return 0;
}

//checknum()