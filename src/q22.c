// Write a C expression that calculates the square root of the sum of two numbers, rounded to the nearest integer.
// You can you math header file for this (eg: #include <math.h>)
#include<stdio.h>
#include<math.h>
int main(){
    double num1,num2;
    printf("Enter any two number: ");
    scanf("%lf %lf",&num1,&num2);
    printf("Result: √(sum) = %d (nearest integer)\n", (int)round(sqrt(num1 + num2)));
    return 0;
}