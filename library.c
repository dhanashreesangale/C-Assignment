#include<stdio.h>
int main()
{
    int days;
    float fine;

    printf("Enter the number of days: ");
    scanf("%d", &days);

    if (days > 0 && days <= 5)
        fine = 5 * days;

    if (days >= 6 && days <= 10)
        fine = 15 * days;

    if (days > 10)
        fine = 20 * days;


    printf("You have to pay Rs. %.2f fine.", fine);
}