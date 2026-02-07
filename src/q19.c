// Given three variables a, b, and c, write an expression that checks if a is equal to b and b is not equal to c.
#include <stdio.h>

int main() {
    int a, b, c;
    
    printf("Enter three integers (a, b, c): ");
    scanf("%d %d %d", &a, &b, &c);
    
    printf("Condition result: %d\n", a == b && b != c);
    
    return 0;
}