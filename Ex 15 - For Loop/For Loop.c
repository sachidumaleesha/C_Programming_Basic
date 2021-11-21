#include <stdio.h>
// For Loop

main(){
    system("CLS");

    int i = 0;

    for(i=0; i<10; i++){
        printf("Enter %d\n",i );
    }

    // Sum of given numbers

    int count,sum,num = 0;
    printf("\n");

    for(count=0; count<5; count++){
        printf("Enter a number:");
        scanf("%d",&num);
        sum = sum + num;
    }

    printf("Sum is %d",sum);

    getch();


}
