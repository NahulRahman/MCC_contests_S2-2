
#include <iostream>
#include <cmath>
using namespace std;

double calculateArea(double a, double b, double c) {
    double s = (a + b + c) / 2.0; // Calculate semi-perimeter
    double area = sqrt(s * (s - a) * (s - b) * (s - c)); // Heron's formula
    return area;
}

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    double area = calculateArea(a, b, c);
    cout << fixed << setprecision(3) << area << endl;

    return 0;
}
