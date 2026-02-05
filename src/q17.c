// Create an expression that checks if a given character is an uppercase letter.
#include<stdio.h>
int main(){
    char letter;
    int result;
    printf("Enter any letter: ");
    scanf(" %c", &letter);
    result = (letter>='A')&&(letter<='Z');
    printf("%s\n", result ? "Yes" : "No");

    return 0;
}
