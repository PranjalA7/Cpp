enum Category{
    PRIMARY,
    SECONDARY
};
struct student{
    int rollno;
    char name[20];
    float percentage;
    enum Category ctg;
};
void accept(struct student *, int );
void display(struct student *, int );
void search(struct student *, int );
void modify(struct student *, int );