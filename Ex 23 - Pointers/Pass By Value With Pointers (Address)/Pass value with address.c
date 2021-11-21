#include <stdio.h>

addition(int *x, int *t, int *z);
main(){

    int a = 40;
    int b = 20;
    int c;

    addition(&a,&b,&c);
    printf("Addition is %d",c);

    getch();
}
addition(int *x, int *y, int *z){
    *z = *x + *y;
}
