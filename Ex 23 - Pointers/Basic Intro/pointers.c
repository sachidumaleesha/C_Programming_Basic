 #include<stdio.h>
// Pinters are used to store address in variables

main(){

    int age = 21;
    int *pointer = &age;

    printf("Your age is %d\n",*&age);
    printf("Your age is %d\n",*(&age));
    printf("Your age is %d\n",&age);
    printf("Your age is %d\n",pointer);
    printf("Your age is %d\n",*pointer);


    getch();
}
