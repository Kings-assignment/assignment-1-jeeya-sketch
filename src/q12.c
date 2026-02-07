// Given three variables a, b, and c, write an expression that checks if a is greater than b and c is not equal to 0.
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three number a,b,and c: ");
    scanf("%d %d %d",&a,&b,&c);
    printf("%d\n",(a>b) && (c!=0));
    return 0;
}