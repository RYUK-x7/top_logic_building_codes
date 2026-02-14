/*
1. Write a program that accepts the user's first and last name and prints them in reverse order with a space between them
*/

#include <stdio.h>

int main()
{
    char f_name[20], l_name[20]; // declaring two strings for users first and last name
    printf("Enter your first name: ");
    scanf("%s", f_name); // taking user input for first name
    printf("Enter your last name: ");
    scanf("%s", l_name); // taking user input for last name
    printf("Your full name is: %s %s\n", f_name, l_name);

    printf("Your full name in reverse order is: %s %s\n", l_name, f_name); // printing last name first then first name

    return 0;
}