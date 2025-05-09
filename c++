#include <iostream>
using namespace std;

int main() {
    double base, height, area;

    // Input values such that area = 0.5
    base = 1.0;
    height = 1.0;

    // Calculate area
    area = 0.5 * base * height;

    // Display the result
    cout << "Base: " << base << endl;
    cout << "Height: " << height << endl;
    cout << "Area of the triangle = " << area << endl;

    return 0;
}