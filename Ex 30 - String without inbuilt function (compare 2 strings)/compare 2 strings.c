#include <stdio.h>
#include <stdlib.h>

main(){

    int i;
    char str1[20];
    char str2[20];

    printf("Enter string 01: ");
    scanf("%s",&str1);

    printf("Enter string 02: ");
    scanf("%s",&str2);

    for(i=0; str1[i] !='\0'; i++){
        if (str1[i] != str2[i]){
            if( str1[i]>str2[i]){
                printf("String 01 is greater");
            }
            else{
                printf("String 02 is greater");
            }
            getch();
            exit(0);
            }
        }

        printf("Strings are same");


    getch();
}
