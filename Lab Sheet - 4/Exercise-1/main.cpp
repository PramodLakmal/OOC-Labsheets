#include <iostream>
#include <iomanip>

#define PI 22/7.0

using namespace std;

struct Circle {

    float radius;
}C1;
struct Rectangle {

    float length;
    float width;
}yard,R1;
struct Square {

    float length;
}S1;

float areaOfCircle(Circle c1);
float areaOfRectangle(Rectangle r1);
float areaOfSquare(Square s1);

int main()
{
    cout << "Enter the length of the Yard : ";
    cin >> yard.length;
    cout << "Enter the width of the Yard : ";
    cin >> yard.width;

    cout << "Enter the length of the Rectangle : ";
    cin >> R1.length;
    cout << "Enter the width of the Rectangle : ";
    cin >> R1.width;

    cout << "Enter the length of the Square : ";
    cin >> S1.length;

    cout << "Enter the radius of the Circle : ";
    cin >> C1.radius;

    cout << "Green area : " << fixed << setprecision(3) << areaOfRectangle(yard) - areaOfRectangle(R1) - areaOfSquare(S1) - areaOfCircle(C1) << endl;

    return 0;
}
float areaOfCircle(Circle c1) {

    return PI * c1.radius * c1.radius;
}
float areaOfRectangle(Rectangle r1) {

    return r1.length * r1.width;
}
float areaOfSquare(Square s1) {

    return s1.length * s1.length;
}
