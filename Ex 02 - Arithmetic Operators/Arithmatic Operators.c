#include <stdio.h>

main(){
    system("CLS");
    int num1 = 10;
    int num2 = 23;
    float num3 = 1.23;
    float num4 = 25.456;

    int add1,sub1,multi1,dev1,mod1;
    float add2,sub2,multi2,dev2,mod2;

    add1 = num1 + num2;
    sub1 = num1 - num2;
    multi1 = num1 * num2;
    dev1 = num2 / num1;
    mod1 = num2 % num1;

    printf("Addition = %d\n",add1);
    printf("Substraction= %d\n",sub1);
    printf("Multiplication = %d\n",multi1);
    printf("Devision = %d\n",dev1);
    printf("Mod = %d",mod1);

    printf("\n\n-----------------------------\n\n");

    add2 = num3 + num4;
    sub2 = num4 - num3;
    multi2 = num3 * num4;
    dev2 = num4 / num3;


    printf("Addition = %f\n",add2);
    printf("Substraction = %f\n",sub2);
    printf("Multiplication = %0.2f\n",multi2);
    printf("Devision = %f\n",dev2);

    getch();

}
