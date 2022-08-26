#include <stdlib.h>
#include <stdio.h>

double RandomFloat(int lower_bound, int upper_bound)
{
    int x = rand();
    int term_two = x % (upper_bound-lower_bound);
    double term_three = (double) x / RAND_MAX;
    /* printf("\nlower bound: %i", lower_bound);
    printf("\nx%%(upper_bound-lower_bound): %i\n", term_two);
    printf("x / RAND_MAX: %.3f\n", term_three) */;
    return lower_bound + term_two + term_three;

}

int main(void)
{
    int c[4] = {1, 3, 5, 7};
    int i, length;
    length = sizeof(c) / sizeof(c[0]);

    /* for (int i = 0; i < length; i++)
    {
        printf("%i\n", c[i]);
    } */
    
    for (int i = 0; i < 20; i++)
    {
        printf("%.3f\n", RandomFloat(100, 200));
    }
    
    return EXIT_SUCCESS;
}