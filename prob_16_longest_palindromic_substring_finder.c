/*
16. Write a function to find the longest palindromic substring
*/

#include <stdio.h>

// Helper function to expand around center and return length of palindrome
int expand_around_center(char str[], int left, int right, int n)
{
    while (left >= 0 && right < n && str[left] == str[right])
    {
        left--;
        right++;
    }
    // Return length of palindrome found
    return right - left - 1;
}

void find_longest_palindrome(char str[])
{
    int n = 0;

    // Find length of string
    for (int i = 0; str[i] != '\0'; i++)
    {
        n++;
    }

    if (n == 0)
    {
        printf("Empty string\n");
        return;
    }

    int max_length = 1;
    int max_start = 0;

    // Check all possible centers (both odd and even length palindromes)
    for (int i = 0; i < n; i++)
    {
        // Odd length palindromes (center at single character)
        int len1 = expand_around_center(str, i, i, n);

        // Even length palindromes (center between two characters)
        int len2 = expand_around_center(str, i, i + 1, n);

        // Get the longer of the two
        int len = (len1 > len2) ? len1 : len2;

        // Check if this is the longest so far
        if (len > max_length)
        {
            max_length = len;
            // Calculate starting position
            if (len == len1)
            {
                // Odd length
                max_start = i - len / 2;
            }
            else
            {
                // Even length
                max_start = i - len / 2 + 1;
            }
        }
    }

    printf("Longest palindromic substring: ");
    for (int i = max_start; i < max_start + max_length; i++)
    {
        printf("%c", str[i]);
    }
    printf(" (length: %d)\n", max_length);
}

int main()
{
    char sentence[100];

    printf("Enter a string: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove trailing newline if present
    for (int i = 0; sentence[i] != '\0'; i++)
    {
        if (sentence[i] == '\n')
        {
            sentence[i] = '\0';
            break;
        }
    }

    find_longest_palindrome(sentence);

    return 0;

}
