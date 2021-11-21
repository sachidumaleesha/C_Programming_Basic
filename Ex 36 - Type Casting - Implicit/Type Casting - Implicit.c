#include <stdio.h>
// Type Casting - Implicit (Trancelated by Compiler)
main(){

    int x = 10;
    char y = 'a';

    x = x + y; // compiler converts 'a' into ASCII value and add: a = 97
    float z = x + 1.0;

    printf("x = %d\n z = %0.2f",x,z );

    getch();
}
