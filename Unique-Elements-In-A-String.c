/*
    Program to read a string from user and print all uniqe elements in alphabetical order
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sort(char * s){
    int i , j;

    for(i = 0; i < strlen(s) - 1; i++){
        for(j = 0; j < strlen(s) - 1; j++){
            if(s[j] > s[j+1]){
                char temp;

                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }
}

void PrintUniqueElemets(char * s){
    int i = 0;
    char ch = s[i];

    printf("%c" , ch);

    i++;

    while(s[i] != '\0'){

        if(s[i] != ch){
            ch = s[i];
            printf("%c" , ch);
        }

        i++;
    }

    printf("\n");
}

int main(){
    char * s;

    s = (char *) malloc(sizeof(char) * 30);

    printf("Enter a string\n");
    fgets(s , 30 , stdin);

    s[strlen(s) - 1] = '\0';

    sort(s);

    PrintUniqueElemets(s);

    return 0;
}