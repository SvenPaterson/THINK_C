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
    return 1;
}

int main(void)
{
    printf("The output of GreatestCommonDenom is: %i", GreatestCommonDenom(36, 20));
    return (EXIT_SUCCESS);
}