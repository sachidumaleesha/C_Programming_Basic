#include <stdio.h>

main(){
    system("CLS");

    int i,n,temp;
    int pre=0;
    int cur=1;

    printf("Enter a number:");
    scanf("%d",&n);
    printf("%d\t%d",pre,cur);

    for (i=3; i<=n; i++){
        temp = cur;
        cur = pre+cur;
        pre = temp;

        printf("\t%d",cur);
    }




    getch();
}
