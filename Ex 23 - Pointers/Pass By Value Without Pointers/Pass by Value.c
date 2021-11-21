#include <stdio.h>
//Pass by value without pointers

int addition(int x, int y);
main(){

    int a = 50;
    int b = 20;
    int c;

    // c = addition(a,b);
    addition(a,b);
    printf("Addition is %d",addition(a,b));

    getch();
}

int addition(int x, int y){
    int z = x + y;
    return;
}
