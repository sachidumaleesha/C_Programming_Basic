#include <stdio.h>
// Create a MxN Matrix

main(){

    system("CLS");

    int i,j,m,n;
    int matrix[5][5];

    printf("Ënter the order of the matrix (Ex:2,4):" );
    scanf("%d,%d",&m,&n);
    printf("\nEnter the values:\n");

    for(i=0; i<m; i++){
       for(j=0; j<n; j++){
           scanf("%d",&matrix[i][j]);
       }
    }

    for(i=0; i<m; i++){
       for(j=0; j<n; j++){
           printf("%d",matrix[i][j]);
        }
        printf("\n");
    }



    getch();


}
