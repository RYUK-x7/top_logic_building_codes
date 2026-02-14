/*
13. Write a function to find the longest word in a given sentence.
*/

#include <stdio.h>

int longest_word_finder(char str[])
{
    int max_length = 0;     // to store the length of the longest word
    int current_length = 0; // to store the length of the current word

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && str[i] != '\n') // if the character is not a space, it's part of a word
        {
            current_length++;
        }
        else // if we encounter a space, check if current word is longer
        {
            if (current_length > max_length)
            {
                max_length = current_length;
            }
            current_length = 0;
        }
    }

    // Check for the last word in case there is no space at the end of the string
    if (current_length > max_length)
    {
        max_length = current_length;
    }

    return max_length; // return the maximum length found
}

void print_longest_words(char str[], int max_length)
{
    int current_length = 0;
    int start_index = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && str[i] != '\n')
        {
            current_length++;
        }
        else
        {
            if (current_length == max_length)
            {
                // print the word
                for (int j = start_index; j < start_index + current_length; j++)
                {
                    printf("%c", str[j]);
                }
                printf("\n");
            }
            current_length = 0;
            start_index = i + 1;
        }
    }

    // Check for the last word
    if (current_length == max_length)
    {
        for (int j = start_index; j < start_index + current_length; j++)
        {
            printf("%c", str[j]);
        }
        printf("\n");
    }
}

int main()
{
    char sentence[100];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin); // read the input sentence from the user

    int max_length = longest_word_finder(sentence);

    printf("The longest word(s) are:\n");
    print_longest_words(sentence, max_length);

    return 0;
}