#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>


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

float Q_rsqrt(float number)
{
    long i;
    float x2, y;
    const float threehalves = 1.5F;

    x2 = number * 0.5F;
    y = number;
    i = *(long*) &y;
    i = 0x5f3759df - (i >> 1);
    y = *(float*) &i;
    y = y * (threehalves - (x2 * y * y));
    //y = y * (threehalves - (x2 * y * y));

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
    for (int i = 0; i < length; i++)
    {
        array[i] = RandomFloat(lowerBound, upperBound);
    }
}

char StringToUpper(char *str, int str_len)
{
    for (int i = 0; i < str_len; i++)
    {
        if (isalpha(str[i]))
        {
            str[i] = toupper(str[i]);
        }
    }
}

char StringToLower(char *str, int str_len)
{
    for (int i = 0; i < str_len; i++)
    {
        if (isalpha(str[i]))
        {
            str[i] = tolower(str[i]);
        }
    }
}

int main(void){

    char greeting[] = "Stephen Garden";
    printf("%s\n", greeting);
    StringToUpper(greeting, 15);
    printf("%s\n", greeting);
    StringToLower(greeting, 15);
    printf("%s\n", greeting);

    return EXIT_SUCCESS;
}