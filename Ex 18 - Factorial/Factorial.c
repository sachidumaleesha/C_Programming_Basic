#include <stdio.h>
// Factorial
// 3! = 3x2x1

main(){

    system("CLS");

    int ui,i;
    int fact=1;

    printf("Ënter the value:");
    scanf("%d",&ui);

    for (i=0; i<ui; i++){
        fact = fact*(ui-i);
    }

    // for (i=1; i<=ui; i++){
    //    fact = fact*i;
    // }



    printf("Factorial is: %d",fact);

    getch();



}
