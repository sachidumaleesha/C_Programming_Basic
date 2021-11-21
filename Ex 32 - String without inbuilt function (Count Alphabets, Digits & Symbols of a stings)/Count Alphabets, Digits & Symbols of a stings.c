#include <stdio.h>

main(){

    int i;
    int ab = 0;
    int dg = 0;
    int sy = 0;
    char name[50];

    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);

    for(i=0; name[i] != '\0'; i++){
        if(name[i]=='A' && name[i]=='Z' || name[i]=='a' && name[i]=='z'){
            ab++;
        }
        else if(name[i] >= '0' && name[i] <= '9'){
            dg++;
        }
        else{
            sy++;
        }
    }

    printf("Alphabet count: %d\n",ab);
    printf("Digit count: %d\n",dg);
    printf("Special Characters count: %d\n",sy);


    getch();
}
