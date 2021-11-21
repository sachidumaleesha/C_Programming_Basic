#include <stdio.h>
#include <stdlib.h>

main(){

    system("CLS");

    int i,n;

    printf("Enter a number:");
    scanf("%d",&n);

    for (i=2; i<n/2; i++){
        if(n % i==0){
            printf("Not a prime number!");
            getch();
            exit(0);
        }
    }

    printf("Entered number is a prime number!");


    getch();

}
