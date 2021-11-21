#include <stdio.h>
//  Nested If Else with Conditional Operators
main(){
    system("ClS");

    int a = 10;
    int b = 20;
    int c = 30;

    if (a>=b && b==c){
        printf("A is greater than or equal to B & B is equal to C");
    }
    else if(b > c){
        if (b != c || c==a){
            printf("B is not equal to C and C equal top A");
            }
        else{
            printf("B is equal to 20");
        }
    }
    else{
        printf("I don't know what to tell ...");

    }


    getch();

}
