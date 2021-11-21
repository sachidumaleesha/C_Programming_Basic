#include <stdio.h>
#include <stdlib.h>

fibonacci(int pre, int cur, int n);
main(){

    int n;
    int pre = 0;
    int cur = 1;

    printf("How many numbers do you want in fibonacci: ");
    scanf("%d",&n);

    printf("%d\t%d",pre,cur);

    fibonacci(pre, cur, n);

    getch();
}
fibonacci(int pre, int cur, int n){
    int temp;

    if(n==2){
        getch();
        exit(0);
    }

    temp = cur;
    cur = pre + cur;
    pre = temp;

    printf("\t%d",cur);

    fibonacci(pre, cur, n-1);

}
