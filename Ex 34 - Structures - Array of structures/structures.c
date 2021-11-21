#include<stdio.h>

struct employee{
    char name[50];
    int pcode;
    float salary;
};

void fixfgets(char e[]);

main(){
    int i;
    struct employee e[3];

    for(i=0; i<3; i++){
        printf("Enter your name: ");
        fgets(e[i].name, sizeof(e[i].name), stdin);
        printf("Enter your pcode: ");
        scanf("%d",&e[i].pcode);
        printf("Enter your salary: ");
        scanf("%f",&e[i].salary);
        fflush(stdin); // input stream eka clear karannawa aye run weddi
        printf("\n");
    }

    printf("\n=======================\n");


    printf("EmployeeID          Name            Postal Code             Salary\n");
    for(i=0; i<3; i++){
        fixfgets(e[i].name);
        printf("%d\t\t%s\t\t%d\t\t%0.2f\n",i+1,e[i].name,e[i].pcode,e[i].salary);
    }

    getch();
}

void fixfgets(char e[]){
    char *pos = strchr(e, '\n');
    if(pos != NULL){
        *pos = '\0';
    }

}

