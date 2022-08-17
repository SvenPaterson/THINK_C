#include <stdio.h>
#include <stdlib.h>

int FunctionOne(int m, int n) 
{
    // Starting at number, m, add m to (m+1) to (m+2) up to 
    // and including the number, n.
    printf("\n\tinvoking FunctionOne(m=%i,n=%i)", m, n);
    if (m == n) 
    {
        printf("\n\t\tm == n, returning '%i'", n);
        return n;
    }

    else 
    {
        printf("\n\t\tm != n, returning '%i + FunctionOne(%i+1, %i)'", m, m, n);
        return m + FunctionOne(m+1, n);
    }
}

int FunctionTwo(int m, int n) 
{
    // Function performs n! / (m-1)!
    // factorials play a part, not sure why you would want to
    // perfom this arithmetic though

    printf("\n\tinvoking FunctionTwo(m=%i, n=%i)", m, n);
    if (m == n) 
    {
        printf("\n\t\tm == n, returning '%i'", n);
        return n;
    }

    else 
    {
        printf("\n\t\tm !=n, returning '%i * FunctionTwo(%i, %i-1)'", n, m, n);
        return n * FunctionTwo(m, n-1);
    }
}

int main(void) 
{

    int m = 3;
    int n = 7;
    int run_which_func = ;

    if (run_which_func == 1)
    {
        printf("Output of FunctionOne(%i,%i): ", m, n);
        printf("\n%i\n", FunctionOne(m, n));
    }

    else if (run_which_func == 2) 
    {
        printf("Output of FunctionTwo(%i,%i): ", m, n);
        printf("\n%i\n", FunctionTwo(m, n));
    }

    else 
    {
        return EXIT_FAILURE;
    }
    
    return EXIT_SUCCESS;
}
