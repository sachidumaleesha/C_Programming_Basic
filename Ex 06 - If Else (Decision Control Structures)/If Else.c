#include <stdio.h>
// If Else (Decision Control Structures)
main(){
    system("CLS");

    int a = 10;
    int b = 20;

    if ( a==b){
        printf("A is equal to B");
    }
    else{
        printf("A is not equal to B\n\n");
    }

    // By User Inputs

    int x,y;

    printf ("Enter Value for x:");
    scanf("%d",&x);

    printf ("Enter Value for Y:");
    scanf("%d",&y);

    if ( x==y){
        printf("X is equal to Y");
    }
    else{
        printf("X is not equal to Y");
    }



    getch();

}
