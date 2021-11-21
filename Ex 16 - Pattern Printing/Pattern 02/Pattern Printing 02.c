 #include <stdio.h>
// Pattern Printing

//    *
//   **
//  ***
// ****
//*****

 main(){
     system("CLS");

     for(int i=0; i<5; i++){

        for(int j=0; j<5-i-1; j++){
            printf(" ");
        }

        for(int k=0; k<=i; k++){
            printf("*");
        }
        printf("\n");

     }







     getch();
 }
