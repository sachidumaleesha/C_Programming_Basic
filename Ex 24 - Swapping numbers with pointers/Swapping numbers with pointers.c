#include <stdio.h>

swapp(int *x, int *y);
main(){

    int a,b;
    printf("Enter 02 numbers: ");
    scanf("%d,%d",&a,&b);

    printf("Before Swapping");
    printf("\na = %d",a);
    printf("\nb = %d",b);

    swapp(&a,&b);
    printf("\n\nAfter Swapping");
    printf("\na = %d",a);
    printf("\nb = %d",b);
}
swapp(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
