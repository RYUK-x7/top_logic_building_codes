/*
15.Write a function that will find the longest prefix substring of a string that is also a suffix substring of the same string
*/

// This code is partially completed using Artifical Intelligence, and the rest is completed by me. I have added comments to explain the code.

#include <stdio.h>

void find_longest_prefix_suffix(char str[])
{
    int n = 0;

    // Find length of string
    for (int i = 0; str[i] != '\0'; i++)
    {
        n++;
    }

    // Check from longest possible length down to 1
    for (int len = n - 1; len > 0; len--)
    {
        int is_match = 1;

        // Check if first 'len' characters match last 'len' characters
        for (int i = 0; i < len; i++)
        {
            if (str[i] != str[n - len + i])
            {
                is_match = 0;
                break;
            }
        }

        // If match found, print it and return
        if (is_match)
        {
            printf("Longest prefix-suffix: ");
            for (int i = 0; i < len; i++)
            {
                printf("%c", str[i]);
            }
            printf(" (length: %d)\n", len);
            return;
        }
    }

    printf("No prefix-suffix found\n");
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

    find_longest_prefix_suffix(sentence);

    return 0;
}