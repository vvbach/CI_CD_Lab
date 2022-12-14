#include <math.h>

double Area(double x1, double y1, double x2, double y2, double x3, double y3){
    double e1 = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    double e2 = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
    double e3 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
    double p = (e1 + e2 + e3) / 2;
    double area = sqrt(p * (p - e1) * (p - e2) * (p - e3));
    return area;
}

double Perimeter(double x1, double y1, double x2, double y2, double x3, double y3){
    double e1 = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    double e2 = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
    double e3 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
    return e1 + e2 + e3;
}