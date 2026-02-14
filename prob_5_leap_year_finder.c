/*
5. Write a program to check whether any given year is a Leap year or not.
*/

#include <stdio.h>

int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    /*
        A leap year is defined as:
        1. It is divisible by 4;
        2. And if it is divisible by 100, then it must also be divisible by 400 to be a leap year.
    */
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                printf("%d is a leap year.", year);
            else
                printf("%d is not a leap year.", year);
        }
        else
            printf("%d is a leap year.", year);
    }
    else
        printf("%d is not a leap year.", year);
    return 0;
}