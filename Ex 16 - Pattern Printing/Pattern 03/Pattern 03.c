#include <stdio.h>
// Pattern printing 03

// *****
// ****
// ***
// **
// *

main(){
    system("CLS");

    for(int i=0; i<5; i++){
        for(int j=5; j>i; j--){
            printf("*");

        }
        printf("\n");

    }


    getch();


}
