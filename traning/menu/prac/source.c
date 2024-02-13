#include<stdio.h>
#include<string.h>
#include"header.h"
void accept(struct student *s, int i){
    printf("enter roll no:\n");
    scanf("%d",&s[i].rollno);
    printf("Enter name:\n");
    scanf("%s",s[i].name);
    printf("Enter percentage:\n");
    scanf("%f",&s[i].percentage);
    printf("Enter category:0- PRIMARY 1-SECONDARY\n");
    scanf("%d",&s[i].ctg);
}
void display(struct student *s, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d\n%s\n%f\n",s[i].rollno,s[i].name,s[i].percentage);
        switch (s[i].ctg)
        {
        case 0:
            printf("PRIMARY\n");
            break;
        
        case 1:
        printf("SECONDARY");
            break;
        }
    }
    
}
void search(struct student *s, int n){
    int sea;
    printf("enter a roll no to search: ");
    scanf("%d",&sea);
    int i;
    for (i = 0; i < n; i++)
    {
        if (sea==s[i].rollno)
        {
            printf("%d\n",s[i].rollno);
            printf("%s\n",s[i].name);
            printf("%f\n",s[i].percentage);
            switch (s[i].ctg)
            {
            case 0:
                printf("PRIMARY\n");
                break;
            
            case 1:
                printf("SECONDARY\n");
                break;
            }
            return;
        }
    }
    if (i==n)
    {
        printf("roll no not found\n");
    }    
}
void modify(struct student *s, int n){
    int roll;
    printf("Enter the roll no to edit\n");
    scanf("%d",&roll);
    for (int i = 0; i < n; i++)
    {
        if (roll==s[i].rollno)
        {
            printf("what u want to edit (1.Name 2.Percntage 3.Category)\n");
            int ch;
            scanf("%d",&ch);
            switch (ch)
            {
            case 1:
                printf("Enter new name: ");
                scanf("%s",s[i].name);
                break;
            
            case 2:
                printf("Enter new perc: ");
                scanf("%f",&s[i].percentage);
                break;
            case 3:
                printf("Enter category: ");
                scanf("%d",&s[i].ctg);
                break;
            }
        }
        
    }
    
}