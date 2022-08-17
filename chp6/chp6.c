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
    int i = 1;
    double old_guess = a / 2.0; // initial guess
    double new_guess, res = a;

    while (i < 15)
    {   
        printf("Abs value of diff: %.06f", fabs(new_guess-old_guess));
        // needs work...
        printf("\n%.04f\n", res);
        new_guess = (old_guess + a/old_guess)/2.0;
        i += 1;
    }

    return new_guess;
}


int main(void)
{
    //PrintPowersOfTwoTable();
    //PrintMultTable(10);
    //Loop(10);
    printf("\n%.04f", Square_Root(2947.957));
    return EXIT_SUCCESS;
}