/*
10. Write a function that takes a number as a parameter and checks whether the
number is prime or not.
Note: A prime number (or a prime) is a natural number greater than 1 and that
has no positive divisors other than 1 and itself
*/

#include <stdio.h>
int is_prime(int num)
{
    if (num <= 1)
    {
        return 0; // Not prime
    }
    for (int i = 2; i <= num / 2; i++) // actually this loop starts when input number is greater than 3
    {
        if (num % i == 0)
        {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (is_prime(num)) // calling the function to check if the number is prime (1==true, 0==false)
    {
        printf("%d is a prime number.\n", num);
    }
    else
    {
        printf("%d is not a prime number.\n", num);
    }
    return 0;
}