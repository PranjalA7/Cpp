#include <stdio.h>
#include "header.h"

void accept(struct Student *s, int i)
{
    printf("\n Enter rollno ");
    scanf("%d", &s[i].rollno);
    printf("\n Enter name ");
    scanf("%s", s[i].name);
    printf("\n Enter percentage ");
    scanf("%f", &s[i].percentage);
    printf("\n Enter Category 0.PRIMARY 1.SECONDARY");
    scanf("%d", &s[i].catg);
}

void display(struct Student *s1, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\n%d", s1[i].rollno);
        printf("\n%s", s1[i].name);
        printf("\n%f", s1[i].percentage);
        switch (s1[i].catg)
        {
        case PRIMARY:
            printf("\n U r Primary Student ");
            break;
        case SECONDARY:
            printf("\n U r Secondary Student ");
            break;
        }
    }
}

void search(struct Student *s1, int n)
{
    int r,i;
    printf("\nEnter rollno whose record has to be searched ");
    scanf("%d", &r);
    for (i = 0; i < n; i++)
    {
        if (s1[i].rollno == r)
        {
            printf("\n%d", s1[i].rollno);
            printf("\n%s", s1[i].name);
            printf("\n%f", s1[i].percentage);
            switch (s1[i].catg)
            {
            case PRIMARY:
                printf("\n U r Primary Student ");
                break;
            case SECONDARY:
                printf("\n U r Secondary Student ");
                break;
            }
            break;
        }
    }
    if(i==n)
    {
        printf("\n Record not found ");
    }
}
void modify(struct Student *s1, int n)
{
    int r,i,choice;
    printf("\nEnter rollno whose record has to be modified ");
    scanf("%d", &r);
    for (i = 0; i < n; i++)
    {
        if (s1[i].rollno == r)
        {
            printf("\n MENU 1.NAME 2.PERCENTAGE");
            printf("\n Enter choice ");
            scanf("%d",&choice);
            switch(choice)
            {
                case 1:
                    printf("\nEnter New Name ");
                    scanf("%s",s1[i].name);
                    break;
                case 2:
                     printf("\nEnter New percentage ");
                    scanf("%f",&s1[i].percentage);
                    break;
            }
            break;
        }
    }
    if(i==n)
    {
        printf("\n Record not found ");
    }
}
