#include <iostream>
using namespace std;

float area(float, float);
float area(float);

int main() {
    float r, B, H;
    cout << "Enter base and height of triangle: ";
    cin >> B >> H;
    cout << "Enter radius of circle: ";
    cin >> r;
    cout << "\nArea of triangle is " << area(B, H);
    cout << "\nArea of circle is " << area(r);
    return 0;
}

float area(float B, float H) {
    return ((B * H) / 2);
}

float area(float r) {
    return (3.14 * r * r);
}
