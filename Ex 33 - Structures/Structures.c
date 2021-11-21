#include <stdio.h>
// Structures - Colllection of variables in different types

struct Student{
    char name[50];
    int age;
    int weight;
};
void fixfgets(char s[]);

main(){

    struct Student s;

    printf("Enter your name: ");
    fgets(s.name, sizeof(s.name), stdin);
    printf("Enter your age: ");
    scanf("%d",&s.age);
    printf("Enter your weight: ");
    scanf("%d",&s.weight);

    fixfgets(s.name);

    printf("\n------------------\n");

    printf("\nYour name is %s\n",s.name);
    printf("Your age is %d\n",s.age);
    printf("Your weight is %d\n",s.weight);

    getch();

}
// s - string terminate character
void fixfgets(char s[]){
    char *pos = strchr(s, '\n');
    if(pos != NULL){
        *pos = '\0';
    }

}
