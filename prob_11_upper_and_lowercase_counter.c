/*
11. Write a function that accepts a string and counts the number of upper- and lowercase letters.
Sample output:
Original String: The quick Brow Fox
No. of Upper-case characters: 3
No. of Lower-case characters: 13
*/
#include <stdio.h>

void count_upper_lower(char str[], int *upper_count, int *lower_count)
{
    *upper_count = 0;                    // initialize upper case count to 0
    *lower_count = 0;                    // initialize lower case count to 0
    for (int i = 0; str[i] != '\0'; i++) // loop through the string until the null character is reached
    {
        if (str[i] >= 'A' && str[i] <= 'Z') // check if the character is an upper case letter using ASCII values logic (65-90 for A-Z)
        {
            (*upper_count)++; // increment upper case count
        }
        else if (str[i] >= 'a' && str[i] <= 'z') // check if the character is a lower case letter using ASCII values logic (97-122 for a-z)
        {
            (*lower_count)++; // increment lower case count
        }
    }
}

int main()
{
    char str[100];              // array to store the input string
    int upper_case, lower_case; // variables to store the counts of upper and lower case letters
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);                   // read the input string from the user
    count_upper_lower(str, &upper_case, &lower_case); // call the function to count upper and lower case letters
    printf("Original String: %s\n", str);
    printf("No. of Upper-case characters: %d\n", upper_case);
    printf("No. of Lower-case characters: %d\n", lower_case);
    return 0;
}