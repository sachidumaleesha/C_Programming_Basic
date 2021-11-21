#include <stdio.h>
// Function Declaration/ Prototype
// We use void there is no return anymore.

void printName();
main(){

    printName();

    getch();
}

// Function Definition
void printName(){
    char name[20];
    printf("Enter your name:");
    fgets(name, sizeof(name), stdin );

    printf("Your name is %s",name);

}

