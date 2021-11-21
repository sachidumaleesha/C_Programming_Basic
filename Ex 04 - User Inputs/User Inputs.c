#include <stdio.h>
//user inputs (scanf)

main(){
    system("CLS");

    int num1, num2, answer;
    printf("Enter a number :");
    scanf("%d", &num1);

    printf("Enter a number :");
    scanf("%d", &num2);

    answer = num1 + num2;
    printf("Sum is %d",answer);



    // Calculate the area of the circle
    // By using const it can't be changed

    const float PI = 3.14;
    float r,area;

    printf("\n\nEnter the radius:");
    scanf("%f",&r);

    area = PI*(r*r);
    printf("Area is %f",area);

    // Calculate student total marks and average

    int mark1,mark2,mark3,total;
    float avg;

    printf("\n\nEnter the mark1:");
    scanf("%d",&mark1);

    printf("Enter the mark2:");
    scanf("%d",&mark2);

    printf("Enter the mark3:");
    scanf("%d",&mark3);

    total = mark1 + mark2 + mark3;
    avg = total/3.0;

    printf("\n\Total marks are %d",total);
    printf("\nAvarage is %f",avg);

    // Swapping Two Numbers

    int a,b,temp;
    printf("\n\nEnter values: \na=%d \nb=%d",a,b);
    scanf("%d,%d",&a,&b);



    printf("Enterd value before swapping: \na=%d \nb=%d",a,b);

    temp = a;
    a = b;
    b = temp;

    printf("\n\nEnterd Value After Swapping: \na=%d \nb=%d",a,b);



    getch();

}
