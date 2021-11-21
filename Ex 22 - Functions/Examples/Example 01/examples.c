#include <stdio.h>

void printName(char name[20]);
void printHeightWeight(float height,float weight);
char printGrade(int marks);

main(){

    char name[20];
    printf("Enter your name:");
    fgets(name, sizeof(name), stdin);
    printName(name);

    float height, weight;
    printf("\nEnter your height:");
    scanf("%f",&height);
    printf("\nEnter your weight:");
    scanf("%f",&weight);
    printHeightWeight(height,weight);

    int marks;
    printf("\nEnter your marks:");
    scanf("%d",&marks);
    printf("\nYour Grade is %c",printGrade(marks));


    getch();
}

void printName(char name[20]){
    printf("\nYour name is %s",name);
}

void printHeightWeight(float height,float weight){
    printf("\nHeight is %0.2fcm",height);
    printf("\nWeight is %0.2fkg",weight);
}

char printGrade(int marks){
    if(marks >= 75){
        return 'A';
    }
    else if (marks >=65){
        return 'B';
    }
    else if (marks >=55){
        return 'C';
    }
    else if (marks >=35){
        return 'S';
    }
    else {
        return 'W';
    }

}



