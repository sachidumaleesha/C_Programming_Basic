#include <stdio.h>
main(){
    system("CLS");

    int age = 20;
    char grade = 'A';
    float weight = 70.32;
    double longtitude = 58.64752216;

    printf("My Age is %d \n",age);
    printf("My Grade is %c \n",grade);
    printf("My Weight is %0.2f \n",weight);
    printf("and Longtitude is %0.4lf \n",longtitude);

    printf("\n\nSize of int: %d",sizeof(age));
    printf("\nSize of chr: %d",sizeof(grade));
    printf("\nSize of float: %d",sizeof(weight));
    printf("\nSize of double: %d",sizeof(longtitude));

    getch();
}

// %d - how many it gain to store in Ram (Display in bytes)
// %0.2f - From That it shows Upto two decimals only
