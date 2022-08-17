#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define FALSE 0
#define TRUE 1

double Area(double radius) 
{
    const double PI = acos(-1);
    double area = PI * radius * radius;
    return area;
}


double Distance(double x1, double y1, double x2, double y2) 
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}


double AreaFromPoints(double xc, double yc, double xp, double yp) 
{
    return Area(Distance(xc, yc, xp, yp));
    // Ex5.6 Answer - return sqrt(SumSquares((x2-x1), (y2-y1)))
}


int IsSumGreater(int a, int b, int c) 
{
    return (a > (b+c));
}


int IsTriangle(int a, int b, int c) 
{
    return !(IsSumGreater(a, b, c) || 
             IsSumGreater(b, c, a) || 
             IsSumGreater(c, a, b));
}



int main(void) {
    
    double area_from_points =  AreaFromPoints(1.0, 2.0, 10.0, 9.0);
    printf("%.3f\n", area_from_points);
    printf("Test Case using sides of length: %i, %i, %i.\t\t", 5, 9, 3);
    printf("Should output: 0.\tActual Output: %i\n", IsTriangle(5, 9, 3));
    printf("Test Case using sides of length: %i, %i, %i.\t\t", 1, 2, 4);
    printf("Should output: 0.\tActual Output: %i\n", IsTriangle(1, 2, 4));
    printf("Test Case using sides of length: %i, %i, %i.\t\t", 1, 2, 3);
    printf("Should output: 1.\tActual Output: %i\n", IsTriangle(1, 2, 3));
    printf("Test Case using sides of length: %i, %i, %i.\t\t", 500, 600, 13000);
    printf("Should output: 0.\tActual Output: %i\n", IsTriangle(500, 600, 13000));
    printf("Test Case using sides of length: %i, %i, %i.\t\t", 13928, 13982, 13857);
    printf("Should output: 1.\tActual Output: %i\n", IsTriangle(13928, 13982, 13857));
   
   return EXIT_SUCCESS;

}