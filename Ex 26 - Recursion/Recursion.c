#include <stdio.h>

void recur(int x);
main(){

    int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    recur(n);

    getch();
}

void recur(int x){
    printf("Number: %d\n",x);
    if(x >1 && x<50){
        recur(x-1);
    }
}
