#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void checkFermat(int a, int b, int c, int n) {
    int result = pow(a, n) + pow(b, n);
    if (n > 2 && result == pow(c, n)) {
        printf("Holy smokes, Fermat was wrong!\n");
    }
    else {
        printf("No, that doesn't work.\n");
    }
}

int main(void) {
    checkFermat(1,2,3,1);
}