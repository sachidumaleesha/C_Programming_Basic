#include <stdio.h>
// Function with parameters

float getAddition(float x, int y);
main(){

    float num1;
    int num2;

    printf("Enter your numbers (Ex:10.65,12) :");
    scanf("%f,%d",num1,num2);
    //getAddition(num1,num2);

    printf("Answer is %0.2f",getAddition(num1,num2));

    getch();
}

float getAddition(float x, int y){
    return (x+y);
    //float c = x+y;
    //printf("Answer is %0.2f",c);
}
