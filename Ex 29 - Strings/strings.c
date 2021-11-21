#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){

    char name[20];
    char copy[20];
    printf("Enter a name: ");
    fgets(name , sizeof(name), stdin);
    printf("Length : %d\n",strlen(name));
    //Sprintf("Reverse : %s\n",strrev(name));

    printf("Upper Case : %s\n",strupr(name));
    printf("Lower Case : %s\n",strlwr(name));

    //copying
    printf("Before copying: %s",name);
    strcpy(copy,name);
    printf("After copying: %s",copy);

    // String concadinate

    char fname[20];
    char lname[20];
    printf("Enter first name: ");
    fgets(fname, sizeof(fname), stdin);
    printf("Enter first name: ");
    fgets(lname, sizeof(lname), stdin);

    printf("Full name is %s", strcat(fname,lname));

    if(strcmp(fname,lname)==0){
        printf("fname == lname");
    }
    else{
        printf("fname != lname");
    }

    getch();
}
