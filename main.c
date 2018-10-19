//Rodrigo Perez Solis
//A01411278
//In this program the user will get whatever text he writes in reverse.
#include <stdio.h>
#include<string.h>

int main() {
    char str[100];//Variable declaration
    printf("Tell me something");//We ask the user to put whatever he wants
    fgets(str, sizeof(str),stdin);

    printf("Your text in reverse is:");
    for(int i= strlen(str);i>0;i--){ // Here we will print the characters in the strig
        printf("%c",str[i-1]);
    }
    return 0;
}