#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void PrintDateAmerican(int day, int month, int year) {
    printf("%i/%i/%i\n", month, day, year);
}

void PrintDateEuropean(int day, int month, int year) {
    printf("%i/%i/%i\n", day, month, year);
}

double Multadd(double a, double b, double c) {
    return (a + b + c);
}

double Yikes(double x) {
    double y = exp(-x);
    return Multadd(x * y, sqrt(1-y), 0.0);
}

int main(void) {
    PrintDateAmerican(22,8,2022);
    PrintDateEuropean(22,8,2022);
    double res = Multadd(sin(acos(-1)/4), cos(acos(-1)/4)/2, 0.0);
    printf("Multadd(sin(acos(-1)/4), cos(acos(-1)/4)/2, 0.0): %.3f\n", res);
    printf("Yikes(3.0): %.3f\n", Yikes(3.0));
}

