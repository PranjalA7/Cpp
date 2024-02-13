#include<stdio.h>
enum Category
{
    PRIMARY,SECONDARY
};
struct Student
{
    //members/elements of structure
    int rollno;
    char name[20];
    float percentage;
    enum Category catg;
};
void display(struct Student *,int );
void accept(struct Student *s,int i);
void search(struct Student *,int );
void modify(struct Student *,int);