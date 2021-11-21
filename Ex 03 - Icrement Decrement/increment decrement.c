#include <stdio.h>
// Arithmetic Operators - Increment Decrement

main(){
    system("CLS");
    int a = 10;
    int b = 20;
    int c = 30;

    int x;
    int y;

    printf("Pre Increment\n"); // pre - pera
    x = ++a; // ++ means increase by 1
    printf("x = %d",a);
    printf("\na = %d",a);

    printf("\n\nPre Decrement\n");
    x = --a; // -- means Decrease by 1
    printf("x = %d",a);
    printf("\na = %d",a);

    printf("\n\nPost Increment\n"); // post - pasu
    y = b++; // ++ means increase by 1
    printf("y = %d",b);
    printf("\nb = %d",b);

    printf("\n\nPost Decrement\n");
    y = b--; // -- means Decrease by 1
    printf("y = %d",b);
    printf("\nb = %d",b);


    getch();


}
