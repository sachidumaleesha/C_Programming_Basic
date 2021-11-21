#include <stdio.h>
// While Loops - Reptation Task

main(){
    system("CLS");

    int count1 = 0;

    while (count1 < 20){
        printf("You have %d rupees\n",count1+1);
        count1++;
    }

    printf("\n\n=========== Calculate Marks ==========\n\n");




    int marks[10] = {10,20,30,40,50,60,70,80,90,100};
    int count = 0;
    int sum = 0;
    int size = sizeof(marks)/sizeof(marks[0]);

    while (count < size){
        printf("%d student mark is %d\n",count+1,marks[count]);
        sum = sum + marks[count]; //sum += marks[count];
        count++; //count = count + 1;
    }

    printf("\nSum is %d",sum);



    // Store User Inputs and print at the end


    int userInput[10];
    int count2 = 0;
    int size2 = sizeof(userInput)/sizeof(userInput[0]);

    printf("\n\n=========== User Inputs ==========\n\n");

    while( count2 < size2 ){
        printf("Enter a number:");
        scanf("%d",&userInput[count2]);
        count2++;


    }

    count2 = 0;

    while( count2 < size2 ){
        printf("\n%d",userInput[count2]);
        count2++;
    }

    // Reverse an array

    printf("\n\n=========== Reverse an Array ==========\n\n");

    char name[] = "Diwan Sachidu";
    int size3 = sizeof(name)/sizeof(name[0]);
    int count3 = size3 - 2;

    while (count3 >= 0){
        printf("%c",name[count3]);
        count3--;
    }






    getch();
}
