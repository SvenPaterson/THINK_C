#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>


void PrintBackwards(char *word)
{
    int i = strlen(word);
    while (i > 0)
    {
        printf("%c", word[i-1]);
        i -= 1;
    }
}

void PrintArray(float array[], int length)
{
    printf("\n");
    for(int i = 0; i < length; i++)
    {
        printf("%.4f ", array[i]);
    }
    printf("\n");
}

float Q_rsqrt( float number )
{
    long i;
    float x2, y;
    const float threehalves = 1.5F;

    x2 = number * 0.5F;
    y = number;
    i = * ( long * ) &y;
    i = 0x5f3759df - ( i >> 1 );
    y = * ( float * ) &i;
    y = y * ( threehalves - ( x2 * y * y ) );
    //y = y * ( threehalves - ( x2 * y * y ) );

    return y;
}

float RandomFloat(int lower_bound, int upper_bound)
{
    int x = rand();
    int term_two = x % (upper_bound-lower_bound);
    float term_three = (float) x / RAND_MAX;
    
    return lower_bound + term_two + term_three;

}

void RandomizeArray(float array[], int length, int lowerBound, int upperBound)
{
    /* Will pass randomized values to array parameter, inclusive of the lower
    bound and exclusive of the upper bound */
    srand(time(NULL));
    for(int i = 0; i < length; i++)
    {
        array[i] = RandomFloat(lowerBound, upperBound);
    }
}


int main(void){

    int array_len = 500000;
    float array[array_len];
    RandomizeArray(array, array_len, 1, 100);
    //PrintArray(array, array_len);
    
    for (int i = 0; i < array_len; i++)
    {
        //array[i] = 1.0 / sqrt(array[i]);
        array[i] = Q_rsqrt(array[i]);
    }
    
    //PrintArray(array, array_len);
    return EXIT_SUCCESS;
}