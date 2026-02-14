/*
3. Write a program to swap two given numbers without using a temporary variable.
*/

#include <stdio.h>

int main()
{
    int a = 100, b = 7;
    printf("Currecnt value of a, b = %d, %d \n", a, b); // a = 100, b = 7

    a = a + b;                                            // a becomes 7+100 = 107
    b = a - b;                                            // b becomes [ 107(new a) - 7(old b)=100 ], now a is swaped into b
    a = a - b;                                            // a becomes [ 107(new a) - 100(new b)=7], now b is swaped into a
    printf("Value of a, b after swaped = %d, %d ", a, b); // a = 7, b = 100

    return 0;
}