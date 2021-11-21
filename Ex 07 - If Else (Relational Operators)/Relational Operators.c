#include <stdio.h>
// If Else - relational Operators
main(){
    system("CLS");

    int w,x,y,z;

    printf("Enter value for W :");
    scanf("%d",&w);

    printf("Enter value for X :");
    scanf("%d",&x);

    printf("Enter value for Y :");
    scanf("%d",&y);

    printf("Enter value for Z :");
    scanf("%d",&z);


    if(w == x){
        printf("\nW is Equal to X");
    }
    else if (x != y){
        printf("\nX is not equal to Y");
    }
    else if (y >= z){
        printf("\nY is greater than or equal to Z");
    }
    else if (z < w){
        printf("\nZ is less than W");
    }
    else{
        printf("\nI don't know what to say..:)");
    }


    getch();

}
