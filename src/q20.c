// Write an expression that checks if a number is a multiple of either 3 or 5.
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Is multiple of 3 or 5: %d\n", num % 3 == 0 || num % 5 == 0);
    return 0;
}