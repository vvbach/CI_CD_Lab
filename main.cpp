#include <iostream>
#include "triangle.cpp"
using namespace std;
int main(){
    double x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    cout << "Area: "<<  Area(x1, y1, x2, y2, x3, y3) << endl << "Perimeter: " << Perimeter(x1, y1, x2, y2, x3, y3);
}