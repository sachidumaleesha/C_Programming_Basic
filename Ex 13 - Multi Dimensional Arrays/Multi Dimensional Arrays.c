#include <stdio.h>
// Multi Dimensional Arrays
// 2 di mensional
// Arrays Inside Arrays

main(){
    system("ClS");

    int num [2][3] = {
                       {1,2,3},
                       {4,5,6}
                                };

    printf("%d",num[1][1]);

    num[1][1] = 20;

    printf("\n%d",num[1][1]);



// Temperature of two cities in 05 days

    int temp[5][2] = {
                       {20,32},
                       {16,23},
                       {15,24},
                       {23,17},
                       {20,14}
                     };

    printf("\nTem of 1st City: %d and Tem of 2nd City: %d On Day 01",temp[0][0],temp[0][1]);
    printf("\nTem of 1st City: %d and Tem of 2nd City: %d On Day 02",temp[1][0],temp[1][1]);
    printf("\nTem of 1st City: %d and Tem of 2nd City: %d On Day 03",temp[2][0],temp[2][1]);
    printf("\nTem of 1st City: %d and Tem of 2nd City: %d On Day 04",temp[3][0],temp[3][1]);
    printf("\nTem of 1st City: %d and Tem of 2nd City: %d On Day 05",temp[4][0],temp[4][1]);








    getch();
}
