/*
7. Write a program to count the number of strings in a given list of strings. The
string length is 2 or more, and the first and last characters are the same
*/

#include <stdio.h>
int main()
{
    char str[100][100]; // 2D array to store 100 strings of maximum length 100
    int n;              // number of strings
    printf("Enter the number of strings: ");
    scanf("%d", &n);
    printf("Enter the strings:\n");
    for (int i = 0; i < n; i++)
    // using for loop to take input of n strings from the user and store them in the 2D array
    {
        scanf("%s", str[i]);
    }

    int count = 0; // to count the number of strings that satisfy the condition
    for (int i = 0; i < n; i++)
    {
        int len = 0; // to calculate the length of the string
        while (str[i][len] != '\0')
        {
            len++;
        }
        if (len >= 2 && str[i][0] == str[i][len - 1]) // checking the condition
        {
            count++;
        }
    }
    printf("Number of strings that satisfy the condition: %d\n", count);
    return 0;
}