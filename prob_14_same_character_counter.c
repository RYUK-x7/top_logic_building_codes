/*
14. Write a function that will take a sentence as input and will count how many times
each character appears
*/

#include <stdio.h>

void count_characters(char str[], int count[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        count[(int)str[i]]++; // increment the count of the character in the count array using its ASCII value as index
    }
}

int main()
{
    char sentence[100]; // array to store the input sentence
    int count[256] = {0};
    /* array to store the count of each character, initialized to 0 for all characters (ASCII values range from 0 to 255 [in older pc, there are 128 characters, but in modern pc, there are 256 characters])
     */
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin); // read the entire line including spaces
    // space and enter keys causes issue when using scanf, so we use fgets to read the input sentence from the user
    for (int i = 0; i < sizeof(sentence) / sizeof(sentence[0]); i++)
    {
        if (sentence[i] == '\n')
        {
            sentence[i] = '\0'; // replace the newline character with null character to properly terminate the string
            break;              // exit the loop after replacing the newline character
        }
    }
    count_characters(sentence, count); // call the function to count characters

    printf("Character counts:\n");
    for (int i = 0; i < 256; i++)
    {
        if (count[i] > 0) // print only characters that appear in the sentence
        {
            printf(" ASCII value %d: %c : %d\n", i, i, count[i]); // print the character and its count using its ASCII value to get the character representation
        }
    }
    return 0;
}