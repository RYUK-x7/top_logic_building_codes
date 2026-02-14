/*
17.Write a function to reverse each word of a sentence.
Sample: "Hello World" → "olleH dlroW"
*/
#include <stdio.h>

void reverse_each_word(char str[])
{
    int start = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        // If we encounter a space, reverse the word
        if (str[i] == ' ')
        {
            // Reverse the word from start to i-1
            int end = i - 1;
            while (start < end)
            {
                // Swap characters
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }
            start = i + 1; // Next word starts after the space
        }
    }

    // Reverse the last word
    int end = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        end = i;
    }
    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    char sentence[100];

    printf("Enter a sentence: ");
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

    printf("Original: %s\n", sentence);

    reverse_each_word(sentence);

    printf("Reversed: %s\n", sentence);

    return 0;
}