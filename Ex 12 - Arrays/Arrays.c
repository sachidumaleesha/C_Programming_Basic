#include <stdio.h>
// Arrays - Collection of similar kind of data

main(){
    system("CLS");

    int nums[5] = {10,20,30,40,50};
    float myFloats[5] = {10.2,302.41,20.85,29.41,30.2};
    char myChar[5] = {'A','E','I','O','U'};

    printf("My Favourite Character is %c",myChar[2]);

// Arrays - Arithmetic Operators & Replacements

    int sum = nums[1] + nums[3];
    printf("\n\nSum is %d",sum);

    printf("\nBefore Replacing 5th Element: %d",nums[4]);

    nums[4] = sum;

    printf("\nAfter Replacing 5th Element: %d",nums[4]);

// Arrays - strings on Character arrays

    char fName[] = {"Diwan Sachidu"};
    printf("\nMy name is %s",fName);

    printf("\n\nChecking Size of Array:");

    int size = sizeof(fName)/sizeof(fName[0]);
    printf("\nSize of Array is: %d",size);


    // Get User Input & Run the program

    char name[100];
    char nameAgain[100];

    //printf("\n\nEnter your Name:");
    //scanf("%s",&name);
    //printf("\nYour name is %s",name);

    printf("/n/n Your Name Again:");
    fgets(nameAgain, sizeof(nameAgain), stdin);
    printf("Your name is ");
    puts(nameAgain);


    getch();

}
