#include<stdio.h>
#include "triangle.cpp"

int main(){
    double x1, y1, x2, y2, x3, y3;
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1 ,&x2, &y2, &x3, &y3);
    printf("Area: %lf\nPerimeter: %lf", Area(x1, y1, x2, y2, x3, y3), Perimeter(x1, y1, x2, y2, x3, y3));
}