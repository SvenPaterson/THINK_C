#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void PrintBackwards(char *word)
{
    int i = strlen(word);
    while (i > 0)
    {
        printf("%c", word[i-1]);
        i -= 1;
    }
}
int main(void){

    char first[] = "Hello, ";
    char second[] = "world.";
    
    PrintBackwards(first);
    return EXIT_SUCCESS;
}