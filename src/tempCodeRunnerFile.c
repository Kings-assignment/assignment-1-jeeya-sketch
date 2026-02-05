#include<stdio.h>
int main() {
    int num;
    int result;
    printf("Enter a number:");
    scanf("%d", &num);
    result=(num%2==0)&&(num%3==0);
    printf("The result is %d\n",result); 
    return 0;
}