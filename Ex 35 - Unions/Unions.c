#include <stdio.h>
// Unions - Can Store different data types on same memory location

union data{
    int i;
    float f;
    char str[20];
};
main(){

    union data d;

    printf("Memory size occupied by: %d\n",sizeof(d));


    d.i = 20;
    d.f = 2.5;
    strcpy(d.str, "Diwan Sachidu");

    printf("d.i = %d\n",d.i);
    printf("d.f = %0.2f\n",d.f);
    printf("d.str = %s\n",d.str);


    getch();
}
