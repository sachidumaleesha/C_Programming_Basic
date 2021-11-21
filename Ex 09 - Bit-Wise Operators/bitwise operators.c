#include <stdio.h>
// Bit-wise operators - Bit Level
// & | ^ ~ >> <<

main(){
    system("CLS");

    int a = 10;
    int b = 5;

    printf("Binary And:%d",a&b);
    printf("\nBinary OR:%d",a|b);
    printf("\nBinary Not:%d",~a);
    printf("\nBinary XOR:%d",a^b);
    printf("\nRight Shift:%d",a>>1);
    printf("\nLeft Shift:%d",b<<1);

    getch();

}
