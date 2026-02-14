/*
9. Write a recursive function that checks whether a passed string is a palindrome or
not.
Note: A palindrome is a word, phrase, or sequence that reads the same backward
as forward, e.g., madam or nurses nun
*/

#include <stdio.h>

int palindrom(char str[], int start, int end)
{
    // Base case: If the string is empty or has only one character
    // But this base case will be also used to check the condition when start >= end, which means we have checked all characters
    if (start >= end)
    {
        return 1; // It's a palindrome
    }
    // Check if the first and last characters are the same
    if (str[start] != str[end])
    {
        return 0; // Not a palindrome
    }
    // Recursive case: Check the substring excluding the first and last characters
    return palindrom(str, start + 1, end - 1);
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int len = 0;
    while (str[len] != '\0') // calculating the length of the string
    {
        len++;
    }

    if (palindrom(str, 0, len - 1)) // calling the recursive function to check if the string is a palindrome
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}