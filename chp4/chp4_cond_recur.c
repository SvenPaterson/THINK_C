#include <stdio.h>
#include <stdlib.h>

void LoopCount(int counts) {
    if (counts > 3) {
        printf("%i\n", counts);
        return;
    }
    else {
        printf("%i\n", counts);
        counts -= 1;
        LoopCount(counts);
    }
}

void PrintLines(int lines) {
    if (lines != 0) {
        printf("\n");
        lines -= 1;
        PrintLines(lines);
    }
    else {
        return;
    }
}

void main(void) {
    PrintLines(4);
}