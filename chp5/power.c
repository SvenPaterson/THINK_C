#include <stdio.h>
#include <stdlib.h>

double Power(double x, int n)
{
    printf("\nx: %i, n: %i", x, n);
    if (n == 1) 
    {
        printf("\n\tn == 1, returning '%.2f'", x);
        return (x);
    }
    
    else
    {
        printf("\n\tn != 1, returning '%.2f * Power(%.2f, %i-1)", x, x, n);
        return (x * Power(x, n-1));
    }
}

int main (void)
{
    double x = 4.78;
    int n = 7;
    printf("\n\n%.2f ^ %i = %.2f", x, n, Power(x, n));
    return (EXIT_SUCCESS);
}