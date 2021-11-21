#include <stdio.h>

main(){
    int i;
    int vowels = 0;
    char name[20];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    for(i=0; name[i] != '\0'; i++){
        if(name[i]=='A' || name[i]=='E' || name[i]=='I' || name[i]=='O' || name[i]=='U' ||
           name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u' ){
            vowels++;
           }
    }

    printf("Vowels count: %d",vowels);

    getch();
}
