#include <stdio.h>

main(){

    system("CLS");

    char ope;
    int num1,num2;

    printf("Enter Your Operation (Ex: +):");
    scanf("%c",&ope);

    printf("Enter Your Num1:");
    scanf("%d",&num1);

    printf("Enter Your Num2:");
    scanf("%d",&num2);

    switch (ope){

    case '+':
        printf("Addition:%d",num1+num2);
        break;

    case '-':
        printf("Substraction:%d",num1-num2);
        break;

    case '*':
        printf("Multiplication:%d",num1*num2);
        break;

    case '/':
        printf("Division:%d",num1/num2);
        break;

    default:
        printf("Invalid Input");



    }

    printf("\a Alarm Or beep \n");

    getch();

}
