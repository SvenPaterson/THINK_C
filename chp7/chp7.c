#include <stdlib.h>
#include <stdio.h>

double RandomFloat(int lower_bound, int upper_bound)
{
    int x = rand();
    return lower_bound + x % (upper_bound-1) + (double) x / RAND_MAX;

}

int main(void)
{
    int c[4] = {1, 3, 5, 7};
    int i, length;
    length = sizeof(c) / sizeof(c[0]);

    for (int i = 0; i < length; i++)
    {
        printf("%i\n", c[i]);
    }

    printf("%.3f", RandomFloat(100, 200));
    return EXIT_SUCCESS;
}