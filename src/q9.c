// Input a number representing days and print the equivalent number of weeks and days.
// Example: 
// Input = 10
// Output = "1 week and 3 days"
#include<stdio.h>
int main(){
    int days;
    printf("Enter number of days: ");
    scanf("%d", &days);
    int weeks = days/7;
    int remaining_days = days%7;
    printf("%d weeks and %d days\n", weeks, remaining_days);
     return 0;
}