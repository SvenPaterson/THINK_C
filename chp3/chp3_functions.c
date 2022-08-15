#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void PrintDateAmerican(int day, int month, int year) {
    printf("%i/%i/%i\n", month, day, year);
}

void PrintDateEuropean(int day, int month, int year) {
    printf("%i/%i/%i\n", day, month, year);
}

void Multadd(double a, double b, double c) {
    printf("%.6f\n", a+b+c);
}

void Yikes(double x) {
    double y = exp(-x);
    Multadd(x * y, sqrt(1-y), 0.0);
}

int main(void) {
    PrintDateAmerican(22,8,2022);
    PrintDateEuropean(22,8,2022);
    Multadd(sin(acos(-1)/4), cos(acos(-1)/4)/2, 0.0);
    Yikes(3.0);
}

