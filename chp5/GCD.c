/* 
Write a function that computes the Greatest Common Divider, GCD, of two numbers 
using Euclid's Algorthim. The algorithm is based on the observation that:
    
            GCD(a, b) == GCD(b, r)

where r is the remainder when a is divided by b
*/

// try attacking problem using modulus operator, %

#include <stdio.h>
#include <stdlib.h>

int GreatestCommonDenom(int a, int b)
{
    printf("\na: %i, b: %i", a, b);

    if (b != 0)
    {
        return GreatestCommonDenom(b, a % b);
    }

    else 
    {
        return a;
    }
}

int main(void)
{
    printf("\nThe output of GreatestCommonDenom is: %i", GreatestCommonDenom(97, 36));
    return (EXIT_SUCCESS);
}