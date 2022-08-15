#include <stdio.h>
#include <stdlib.h>

void Bottles (int num_bottles) {
    printf("%i bottles of beer", num_bottles);
}

void Beer_Verse (int current_bottles) {
    if (current_bottles > 0) {
        Bottles(current_bottles);
        printf(" on the wall, ");
        Bottles(current_bottles);
        printf(", ya' take one down, ya'\npass it around, ");
        current_bottles -= 1;
        Bottles(current_bottles);
        printf(" on the wall.\n\n");
        Beer_Verse(current_bottles);
    }
    else {
        printf("No bottles of beer on the wall, no bottles of beer, ");
        printf("ya' can't take one down,\nya' can't pass it around, ");
        printf("'cause there are no more bottles of beer on the\nwall!");
    }
}

int main(void) {
    int num_bottles = 99;
    Beer_Verse(num_bottles);
    return EXIT_SUCCESS;
}