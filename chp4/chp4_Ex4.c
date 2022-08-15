#include <stdio.h>
#include <stdlib.h>

void Zippo (int quince, int flag);

void Baffle (int output)
{
    printf ("%i\n",output);
    Zippo (12, -5);
    }

void Zippo (int quince, int flag)
{
    if (flag < 0)
    {
            printf ("%i zoop\n", quince);
    }
    else
    {
        printf ("rattle ");
        Baffle (quince);
        printf ("boo-wa-ha-ha\n");
        }
    }

int main (void)
{
    Zippo (5, 13);
    return EXIT_SUCCESS;
}