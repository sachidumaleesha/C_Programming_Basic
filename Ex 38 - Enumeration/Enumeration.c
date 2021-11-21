#include<stdio.h>

enum year{January, February, March, Apirl, May, June, July, Auguest, September, October, November, December};

enum week{Mon=10, Tue, Wed, Thu, Fri=10, Sat=15, Sun};

main(){

    int i;

    for(i=January; i<=December; i++){
        printf("%d\n",i);
    }

    printf("\n=================\n");

    printf("%d\n",Mon);
    printf("%d\n",Tue);
    printf("%d\n",Wed);
    printf("%d\n",Tue);
    printf("%d\n",Fri);
    printf("%d\n",Sat);
    printf("%d\n",Sun);



    getch();
}
