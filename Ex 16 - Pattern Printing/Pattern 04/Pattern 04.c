#include <stdio.h>
// Pattern Printing 04

// *****
//  ****
//   ***
//    **
//     *

main(){

    system("CLS");

    for(int i=0; i<5; i++){

        for(int j=0; j<i; j++){
            printf(" ");
        }

        for(int k=5; k>i; k--){
                printf("*");
        }
        printf("\n");
    }




    getch();
}
