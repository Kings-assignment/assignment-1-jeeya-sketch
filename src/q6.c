// Write a C program to calculate the area of a rectangle. Prompt the user to enter the length and width, and display the result.
#include<stdio.h>
int main(){
    float length;
    float width;
    float area;
    printf("Enter length and width of rectangle:");
    scanf("%f %f", &length, &width);
    area=length*width;
    printf("The area of rectangle is: %2f",area);
    return 0;
}