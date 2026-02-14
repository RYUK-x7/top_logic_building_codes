/*
12. Write a function that will take an input n, and will print the numbers from 1 to n,
replacing multiples of 3 with “Fizz”, multiples of 5 with “Buzz”, and multiples
of 3 and 5 with “FizzBuzz”.
*/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        /*
         * The order of the conditions is important here. We need to check for multiples of both 3 and 5 first, because if we check for multiples of 3 or 5 first, we might miss the case where a number is a multiple of both.
         * For example, if we check for multiples of 3 first, when we reach 15, it will be replaced with "Fizz" and we will never check if it's also a multiple of 5. Similarly, if we check for multiples of 5 first, when we reach 15, it will be replaced with "Buzz" and we will never check if it's also a multiple of 3.
         * By checking for multiples of both 3 and 5 first, we ensure that numbers like 15,30,45,60 are correctly replaced with "FizzBuzz".
         */

        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("FizzBuzz ");
        }
        else if (i % 3 == 0)
        {
            printf("Fizz ");
        }
        else if (i % 5 == 0)
        {
            printf("Buzz ");
        }
        else
        {
            printf("%d ", i);
        }
    }
    return 0;
}