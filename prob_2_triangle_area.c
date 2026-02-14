/*
2.  Write a program that will accept the base and height of a triangle from user and
compute its area.
*/

#include <stdio.h>
int main(void)
{
    float height, base; // taking float to take decimal points as input

    printf("Enter Base and height of the triangle: ");

    scanf("%f, %f", &base, &height); // this takes input as the format (10, 5)

    printf("\nThe area of the triangle is: %.2f", 0.5 * height * base); // directly printing the area (2 decimal precision) to avoid creating extra variable

    return 0;
}
