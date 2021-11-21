#include <stdio.h>

main(){

    int array[4] = {1,5,3,4};
    int *a = &array[0];

    printf("Element 01: %d\n",*a);
    printf("Address 01: %d\n",a);

   // *a = *a + 1;
    *a++;

    printf("\nElement 01: %d\n",*a);
    printf("Address 01: %d\n",a);

    getch();
}
