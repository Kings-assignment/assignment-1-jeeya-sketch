// Write a C expression that calculates the sum of the squares of three different numbers.
#include<stdio.h>
int main(){
    int num1, num2, num3, result;
    printf("Enter three numbers; ");
    scanf("%d %d %d",&num1,&num2,&num3);
    result = (num1 * num1) + (num2 * num2) + (num3 * num3);
    printf("%d\n",result);
    return 0;
}