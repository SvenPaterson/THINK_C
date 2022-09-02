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
    printf("\n");
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
    /* 
    takes an array and the range of values in the array as 
    two parameters min and max and stores a histogram of values
    in a second array 
    */
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
    /*
    Searches an array for a specific value and returns
    its index, if not found returns -1
    */
    for(int i = 0; i < length; i++)
    {
        if (array[i] == target)
        {
            return i+1;
        }
        
    }
    return -1;
}

int IndexOfMaxInRange(int array[], int start_index, int stop_index)
{
    /*
    Finds the largest value in a range between two given
    indices and returns the index position of that value
    */
    int big_num_index = start_index;
    for(int i = start_index; i <= stop_index; i++)
    {
        if (array[i] >= array[big_num_index])
        {
            big_num_index = i;
        }
    }
    return big_num_index;
}

void SwapElement(int array[], int index_one, int index_two)
{
    /* 
    Takes an array and two indices and swaps
    the values found at each array index
    */
    int value_one = array[index_one];
    int value_two = array[index_two];
    array[index_one] = value_two;
    array[index_two] = value_one;
}

void SortArray(int array[], int array_length)
{
    /*
    Sorts an array from largest to smallest 
    */
    for (int i = 0; i < array_length; i++)
    {
        SwapElement(array, i, IndexOfMaxInRange(array, i, array_length));
    }
}


int main(void)
{

    int r_array_length = 10; // choose array size
    int lowerBound = 4; // choose low random number, lowerBound is inclusive
    int upperBound = 1000; // choose high random number, upperBound is exclusive

    int r_array[r_array_length];
    RandomizeArray(r_array, r_array_length, lowerBound, upperBound);
    PrintArray(r_array, r_array_length);
    SortArray(r_array, r_array_length);
    PrintArray(r_array, r_array_length);

    /*
    int hist_len = upperBound - lowerBound;
    int histogram[hist_len];
    Histogram(r_array, r_array_length, lowerBound, upperBound, histogram);
    PrintArray(histogram, hist_len); */

    /* int number = 89;
    int lastDigit = number%10;
    int firstDigit = number/10;
    printf("%i", lastDigit*10+firstDigit); */

    /* int big_num_pos = IndexOfMaxInRange(r_array, 0, r_array_length);
    printf("Big Number Index: %i\n", big_num_pos);
    printf("Big Number is %i", r_array[big_num_pos]); */

    return EXIT_SUCCESS;
}