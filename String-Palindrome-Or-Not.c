#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool isPalindrome(char * s){
    int start = 0;
    int end = strlen(s) - 1;

    while(start < end){
        if(s[start] != s[end]){
            return false;
        }
        start++;
        end--;
    }

    return true;
}

int main(){
    char * s = (char *) malloc(sizeof(char) * 30);
    
    printf("Enter a string\n");
    fgets(s , 30 , stdin);

    s[strlen(s) - 1] = '\0';

    if(isPalindrome(s) == true){
        printf("String is Palindrome\n");
    }
    else{
        printf("String is not Palindrom\n");
    }

    return 0;
}