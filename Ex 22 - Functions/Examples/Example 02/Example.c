#include <stdio.h>
#include <stdlib.h>
// Factorial, Fibonacci and Prime Numbers

void factorial(int x);
void fibonacci(int z);
void prime(int y);
main(){

    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    factorial(n);

    int f;
    printf("\n\nEnter how many numbers do you want in fibonacci: ");
    scanf("%d",&f);
    fibonacci(f);

    int p;
    printf("\n\nEnter a number:");
    scanf("%d",&p);
    prime(p);


    getch();
}

void factorial(int x){
    int i;
    int fact=1;
    for(i=1; i<=x; i++){
        fact = fact*i;
    }
    printf("Factorial of %d is %d",x,fact);
}

void fibonacci(int z){
    int i,temp;
    int pre = 0;
    int cur = 1;
    printf("%d\t%d",pre,cur);

     for (i=3; i<=z; i++){
        temp=cur;
        cur=pre+cur;
        pre=temp;

        printf("\t%d",cur);
    }
}

void prime(int y){
    int i;
    for(i=2; i<y/2; i++){
        if(y % i == 0){
            printf("Not a prime Number!");
            getch();
            exit(0);
        }
        printf("Entered number is a prime number!");
    }
}
