 #include <stdio.h>
// Switch Case (Case Control Structures)
main(){
    system("CLS");

    char grade;
    printf("Enter Your Grade:");
    scanf("%c",&grade);

    switch(tolower(grade)){
    case 'a':
        printf("Well Done");
        break;
    case 'b':
        printf("Good");
        break;
    case 'c':
        printf("Not Bad");
        break;
    case 's':
        printf("Ok");
        break;
    default:
        printf("You have to work hard :)");
        break;


    }

    getch();

}
