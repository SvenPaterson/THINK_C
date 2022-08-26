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

void RandomizeArray(int array[], int length, int lowerBound, int upperBound)
{
    /* Will pass randomized values to array parameter, inclusive of the lower
    bound and exclusive of the upper bound */
    for(int i = 0; i < length; i++)
    {
        array[i] = lowerBound + rand() % (upperBound-lowerBound);
    }
}

void PrintArray(int array[], int length)
{
    printf("\n");
    for(int i = 0; i < length; i++)
    {
        printf("%i ", array[i]);
    }
}

int HowMany(int array[], int length, int value)
{
    int count = 0;
    for(int i = 0; i < length; i++)
    {
        if (array[i] == value)
        {
            count++;
        }
    }
    return count;
}

void Histogram(int array[], int array_len, int min, int max, int histogram[])
{
    /* takes an array and the range of values in the array as 
    two parameters min and max and stores a histogram of values
    in a second array */
    int hist_len = max - min;
    for(int i = 0; i < hist_len; i++) 
    {
        histogram[i]=0;
    }
    
    for(int i = 0; i < array_len; i++)
    {
        int index = array[i];
        histogram[index-min]++;
    }
}

int main(void)
{

    int r_array_length = 20; // choose array size
    int lowerBound = 4; // choose low random number, lowerBound is inclusive
    int upperBound = 10; // choose high random number, upperBound is exclusive

    int r_array[r_array_length];
    RandomizeArray(r_array, r_array_length, lowerBound, upperBound);
    PrintArray(r_array, r_array_length);

    int hist_len = upperBound - lowerBound;
    int histogram[hist_len];
    Histogram(r_array, r_array_length, lowerBound, upperBound, histogram);
    PrintArray(histogram, hist_len);

    return EXIT_SUCCESS;
}