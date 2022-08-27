#include <stdlib.h>
#include <stdio.h>
#include <time.h>

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
    srand(time(NULL));
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

int Search(int array[], int length, int target) 
{
    for(int i = 0; i < length; i++)
    {
        if (array[i] == target)
        {
            return i+1;
        }
        
    }
    return -1;
}

int IndexOfMaxInRange(int array[], int array_length)
{
    int big_num_pos = 0;
    for(int i = 0; i < array_length-1; i++)
    {
        if (array[i] > array[big_num_pos])
        {
            printf("Number in position %i is bigger than %i\n", i, big_num_pos);
            big_num_pos = i;
        }
    
    }
    return big_num_pos;
}

int main(void)
{

    int r_array_length = 100; // choose array size
    int lowerBound = 4; // choose low random number, lowerBound is inclusive
    int upperBound = 100; // choose high random number, upperBound is exclusive

    int r_array[r_array_length];
    RandomizeArray(r_array, r_array_length, lowerBound, upperBound);
    PrintArray(r_array, r_array_length);
    printf("\n");

    /*
    int hist_len = upperBound - lowerBound;
    int histogram[hist_len];
    Histogram(r_array, r_array_length, lowerBound, upperBound, histogram);
    PrintArray(histogram, hist_len); */

    /* int number = 89;
    int lastDigit = number%10;
    int firstDigit = number/10;
    printf("%i", lastDigit*10+firstDigit); */


    int big_num_pos = IndexOfMaxInRange(r_array, r_array_length);
    printf("Big Number Index: %i\n", big_num_pos);
    printf("Big Number is %i", r_array[big_num_pos]);

    return EXIT_SUCCESS;
}