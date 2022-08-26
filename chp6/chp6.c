#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double PrintPowersOfTwoTable(void)
{
    double x = 1.0;
    while (x < 65546.0)
    {
        printf("%.0f\t\t%.0f\n", x, log(x) / log(2.0));
        x *= 2.0;
    }
}

void PrintMultiples(int n, int high)
{
    int i = 1;
    while (i < high)
    {
        printf("%i\t", n * i);
        i += 1;
    }
}

void PrintMultTable(int high)
{
    int i = 1;
    while (i < high)
    {
        PrintMultiples(i, high);
        printf("\n");
        i += 1;
    }
}

void Loop(int n)
{
    int i = n;
    while (i > 1)
    {
        printf("%i\n", i);
        if (i%2 == 0)
        {
            i = i/2;
        }
        else{
            i += 1;
        }
    }
}

double Power(double x, int n)
{
    int i = 0;
    double res = x;

    while (i < (n-1))
    {
        res *= x;
        printf("%i\t%.0f\n", i, res);
        i += 1;
    }
    return res;
}

double Square_Root(double a)
{
    double x0 = a / 2.0;         // initial guess
    double x1 = a;

    while (fabs(x1-x0) > 0.0001) // loop until guess is accurate enough
    {   
        x0 = x1;                 // prev guess becomes old guess
        x1 = (x0 + a/x0) / 2.0;  // new guess is calculated
        printf("\nAbs value of diff: %.05f", fabs(x1-x0));
    }

    return x1;
}

double Gauss(double x, int n)
{
    /* 
    Function evaluates e^(-x^2) using the infinite series expansion:
       
        e^(-x^2) = 

            1 - 2x + (3x^2)/2! - (4x^3)/3! + ... + (((-1)^i)(i+1)(x^i))/i!
    to the nth term.

            ith term:   (((-1)^i)(i+1)(x^i))/i! is equivalent to:
                        (i+1)       *       (-x^i)      /       i!
                        a           *       b           /       c

    NOT allowed to use functions Pow or Factorial...
    */
   
    double a = 1.0;
    double b = 1.0;
    double c = 1.0;
    double result = 1.0;

    while (a < n+1)
        {
        c *= a;
        b *= -x;
        result += a*b/c;
        a++;
        }
    return result;
}


int main(void)
{
    //PrintPowersOfTwoTable();
    //PrintMultTable(10);
    //Loop(10);
    //printf("\n%.04f", Square_Root(2573958964947.957));
    double x = 2.0;
    int n = 10;
    printf("Gaussian Expansion of %.4f to %ith term: %.4f", x, n, Gauss(2.0, 10));
    return EXIT_SUCCESS;
}