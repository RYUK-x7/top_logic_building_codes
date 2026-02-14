/*
8. Write a program to print the numbers of a specified list after removing even
numbers from it.
*/
#include <stdio.h>

int main()
{
    int arr[100]; // array to store 100 integers
    int n;        // number of integers

    printf("Enter the number of integers: ");
    scanf("%d", &n);
    printf("Enter the integers:\n");
    for (int i = 0; i < n; i++)
    // using for loop to take input of n integers from the user and store them in the array
    {
        scanf("%d", &arr[i]);
    }

    printf("Numbers after removing even numbers:\n");

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0) // checking if the number is odd
        {
            printf("%d ", arr[i]); // printing the odd number
        }
    }
    return 0;
}