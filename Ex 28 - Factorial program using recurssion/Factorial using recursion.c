#include <stdio.h>
#include <stdlib.h>

void fact(int x);
main(){

    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    fact(n);

    getch();
}
void fact(int x){
    static int facti = 1;
    if(x == 0){
        printf("Entered number factorial is %d",facti);
        getch();
        exit(0);
    }
    facti = facti * x;
    fact(x-1);

}
