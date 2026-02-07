// Given two variables x and y, write an expression that calculates the average of their values.
#include <stdio.h>
int main(){
    int num1, num2;
    printf("Enter any two number: ");
    scanf("%d %d", &num1,&num2);
    int average=((num1+num2)/2);
    printf("the average of two given number is:%d\n ",average);
    return 0;
}