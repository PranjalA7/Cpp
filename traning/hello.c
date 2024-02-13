#include <stdio.h>

struct Test{
    int foo;
    char *bar;
};

int main(){
    struct Test t1;
    struct Test t2;
    t1.foo = 1;
    t1.bar = malloc(100 * sizeof(char));
    strcpy(t1.bar, "t1 bar value");
    t2.foo = 2;
    t2.bar = malloc(100 * sizeof(char));
    strcpy(t2.bar, "t2 bar value");
    printf("t2 foo and bar before copy: %d %s\n", t2.foo, t2.bar);
    t2 = t1;// <---- ASSIGNMENT
    printf("t2 foo and bar after copy: %d %s\n", t2.foo, t2.bar);
    //The following 3 lines of code demonstrate that foo is deep copied and bar is shallow copied
    strcpy(t1.bar, "t1 bar value changed");
    t1.foo = 3;
    printf("t2 foo and bar after t1 is altered: %d %s\n", t2.foo, t2.bar);
    return 0;
}