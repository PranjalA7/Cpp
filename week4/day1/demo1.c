#include <stdio.h>
#include <unistd.h>

int main() {

    int id = fork(); //call to undeclared function "fork" ISO C99 and later not support implementation 
    
    if (id == 0)
    {
        printf("This statement is printed in the child\n");
        printf("Process ID: %d and amy parents ID is: %d\n", getpid(), getppid());
    }
    else {
        printf("This comes from the parent\n");
        printf("Process ID: %d and amy parents ID is: %d\n", getpid(), getppid());
    }
    

    return 0;
}