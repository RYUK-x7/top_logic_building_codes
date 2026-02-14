/*
4. Write a program to check if a triangle is equilateral, isosceles or scalene.
Note: An equilateral triangle is a triangle in which all three sides are equal.
A scalene triangle has three unequal sides.
An isosceles triangle is a triangle with (at least) two equal sides.
*/

#include <stdio.h>
int main()
{
    int a, b, c;

    printf("Enter the three sides of triangle: ");
    scanf("%d, %d, %d", &a, &b, &c); // taking input as the format (10, 5, 7)

    if (a + b > c && a + c > b && b + c > a) // checking if the sides can form a triangle
    {
        if (a == b && b == c) // 3 sides are equal
            printf("The triangle is an equilateral (somobahu) triangle.");
        else if (a == b || b == c || a == c) // two sides are equal
            printf("The triangle is an isosceles (somodibahu) triangle.");
        else // no side is equal
            printf("The triangle is a scalene (bishomobahu) triangle.");
    }
    else
        printf("Invalid triangle sides.");
    return 0;
}