#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define FALSE 0
#define TRUE 1

double Area(double radius) {
    const double PI = acos(-1);
    double area = PI * radius * radius;
    return area;
}

double Distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

double AreaFromPoints(double xc, double yc, double xp, double yp) {
    return Area(Distance(xc, yc, xp, yp));
}

int IsSumGreater(int a, int b, int c) {
    return (a > (b+c));
}
int IsTriangle(int a, int b, int c) {
    return !(IsSumGreater(a, b, c) || IsSumGreater(b, c, a) || IsSumGreater(c, a, b));
}


int main( void) {
    //double area_from_points =  AreaFromPoints(1.0, 2.0, 10.0, 9.0);
    //printf("%.3f", area_from_points);
    //printf("Test Case using sides of length: %i, %i, %i.\t\tShould output: 0.\tActual Output: %i\n", 5, 9, 3, IsTriangle(5, 9, 3));
    //printf("Test Case using sides of length: %i, %i, %i.\t\tShould output: 0.\tActual Output: %i\n", 1, 2, 4, IsTriangle(1, 2, 4));
    //printf("Test Case using sides of length: %i, %i, %i.\t\tShould output: 1.\tActual Output: %i\n", 1, 2, 3, IsTriangle(1, 2, 3));
    //printf("Test Case using sides of length: %i, %i, %i.\t\tShould output: 0.\tActual Output: %i\n", 500, 600, 13000, IsTriangle(500, 600, 13000));
    //printf("Test Case using sides of length: %i, %i, %i.\t\tShould output: 1.\tActual Output: %i\n", 13928, 13982, 13857, IsTriangle(13928, 13982, 13857));
    return EXIT_SUCCESS;

}