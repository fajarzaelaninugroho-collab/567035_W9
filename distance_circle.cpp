#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// Function to calculate the distance between two points (x1,y1) and (x2,y2)
// using the Euclidean distance formula
double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Function to calculate the radius of a circle
// Parameters: center coordinates (x1,y1) and a point on the circle (x2,y2)
// Returns: radius of the circle
double radius(double x1, double y1, double x2, double y2) {
    return distance(x1, y1, x2, y2);
}

// Function to calculate the circumference of a circle
// Parameters: r = radius of the circle
// Returns: circumference of the circle (2πr)
double circumference(double r) {
    const double PI = 3.1416;
    return 2 * PI * r;
}

// Function to calculate the area of a circle
// Parameters: r = radius of the circle
// Returns: area of the circle (πr²)
double area(double r) {
    const double PI = 3.1416;
    return PI * pow(r, 2);
}

int main() {
    double x_center, y_center;  // Center coordinates
    double x_point, y_point;    // Point on circle coordinates
    double r, d, c, a;          // radius, diameter, circumference, area
    
    cout << "==================================================" << endl;
    cout << "            CIRCLE CALCULATOR PROGRAM" << endl;
    cout << "==================================================" << endl;
    cout << endl;
    
    // Input center coordinates
    cout << "Enter the center coordinates of the circle:" << endl;
    cout << "  x-center: ";
    cin >> x_center;
    cout << "  y-center: ";
    cin >> y_center;
    cout << endl;
    
    // Input point on circle coordinates
    cout << "Enter a point on the circle:" << endl;
    cout << "  x-point: ";
    cin >> x_point;
    cout << "  y-point: ";
    cin >> y_point;
    cout << endl;
    
    // Calculate radius using radius function
    r = radius(x_center, y_center, x_point, y_point);
    
    // Calculate diameter (2 × radius)
    d = 2 * r;
    
    // Calculate circumference using circumference function
    c = circumference(r);
    
    // Calculate area using area function
    a = area(r);
    
    // Display results with 4 decimal places
    cout << fixed << setprecision(4);
    cout << "==================================================" << endl;
    cout << "                  RESULTS:" << endl;
    cout << "==================================================" << endl;
    cout << "Circle center       : (" << x_center << ", " << y_center << ")" << endl;
    cout << "Point on circle     : (" << x_point << ", " << y_point << ")" << endl;
    cout << endl;
    cout << "Radius (r)          : " << r << endl;
    cout << "Diameter (d)        : " << d << endl;
    cout << "Circumference (C)   : " << c << endl;
    cout << "Area (A)            : " << a << endl;
    cout << "==================================================" << endl;
    
    return 0;
}