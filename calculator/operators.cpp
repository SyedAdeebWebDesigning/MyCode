//* Operators --> File-1

#include <iostream>
#include <cmath>
using namespace std;

const float GlobalPI = 3.14;

class Arthematic
{
public:
    inline void Addition(float a, float b)
    {
        cout << "Addition of " << a << " and " << b << " is " << a + b << endl;
    }
    inline void Subtraction(float a, float b)
    {
        cout << "Subtraction of " << a << " and " << b << " is " << a - b << endl;
    }
    inline void Multiplication(float a, float b)
    {
        cout << "Multiplication of " << a << " and " << b << " is " << a * b << endl;
    }
    inline void Division(float a, float b)
    {
        cout << "Division of " << a << " and " << b << " is " << a / b << endl;
    }
};
class Perimeter
{
public:
    inline void square(float a)
    {
        cout << "The perimeter of square of side " << a << " is " << a * 4 << endl;
    }
    inline void rectangle(float a, float b)
    {
        cout << "The perimeter of rectangle of side " << a << " and " << b << " is " << 2 * (a + b) << endl;
    }
    inline void eqlTriangle(float a)
    {
        cout << "The perimeter of eqilateral triangle of side " << a << " is " << 3 * a << endl;
    }
    inline void isoTriangle(float a, float b)
    {
        cout << "The perimeter isoscaleous triangle of side " << a << " and " << b << " is " << (2 * a) * b << endl;
    }
    inline void scalTriangle(float a, float b, float c)
    {
        cout << "The perimeter of scelene triangle of side " << a << "," << b << " a        nd " << c << " is " << a + b + c << endl;
    }
    inline void circle(float a)
    {
        cout << "The perimeter of triangle of radius " << a << " is " << 2 * GlobalPI * a << endl;
    }
};
class Area_2D
{
public:
    inline void square(float a)
    {
        cout << "The area of square of side " << a << " is " << powf(a, 2) << endl;
    }
    inline void rectangle(float a, float b)
    {
        cout << "The area of rectangle of side " << a << " and " << b << " is " << a * b << endl;
    }
    inline void triangle(float a, float b)
    {
        cout << "The area of triangle of side " << a << " and " << b << " is " << 0.5 * a * b << endl;
    }
    inline void parallelogram(float a, float b)
    {
        cout << "The area of paralleogram of side " << a << " and " << b << " is " << b * a << endl;
    }
    inline void trapezium(float a, float b, float c)
    {
        cout << "The area of trapezium of side " << a << ", " << b << "and height" << c << " is " << 0.5 * (a + b) * c << endl;
    }
    inline void circle(float a)
    {
        cout << "The area of circle of radius " << a << " is " << GlobalPI * (powf(a, 2)) << endl;
    }
};
class Area_3D
{
public:
    inline void cube(float a)
    {
        cout << "The area of cube of side " << a << " is " << 6 * (powf(a, 2)) << endl;
    }
    inline void cuboid(float a, float b, float c)
    {
        cout << "The area of cuboid of side " << a << ", " << b << " and " << c << " is " << (2 * a * b) + (2 * b * c) + (2 * c * a) << endl;
    }
    inline void cylinder(float a, float b)
    {
        cout << "The area of cylinder of radius " << a << " and height " << b << " is " << 2 * GlobalPI * a * (a + b) << endl;
    }
    inline void cone(float a, float b)
    {
        cout << "The area of cone of radius " << a << " and height " << b << " is " << GlobalPI * a * (a + b) << endl;
    }
    inline void sphere(float a)
    {
        cout << "The area of sphere of radius " << a << " is " << 4 * GlobalPI * powf(a, 2) << endl;
    }
    inline void hemisphere(float a)
    {
        cout << "The area of hemi sphere of radius " << a << " is " << 3 * GlobalPI * powf(a, 2) << endl;
    }
};
class Volume
{
public:
    inline void cuboid(float a, float b, float c)
    {
        cout << "The volume of cuboid of side " << a << ", " << b << " and " << c << " is " << a * b * c << endl;
    }
    inline void cube(float a)
    {
        cout << "The volume of cube of side " << a << " is " << powf(a, 3) << endl;
    }
    inline void cylinder(float a, float b)
    {
        cout << "The volume of cylinder of radius " << a << " and " << " height " << b << " is " << GlobalPI * (powf(a, 2) * b) << endl;
    }
    inline void sphere(float a)
    {
        cout << "The volume of sphere of radius " << a << " is " << 4 / 3 * GlobalPI * powf(a, 3) << endl;
    }
    inline void RightCircularCone(float a, float b)
    {
        cout << "The volume of right circular cone of radius " << a << " and height " << b << " is " << 1 / 3 * GlobalPI * powf(a, 2) * b << endl;
    }
};
class Trignometric
{
private:
    float inRadians(float degress)
    {
        return (degress * GlobalPI) / 180;
    }

public:
    inline void Sine(float a)
    {
        float radian = inRadians(a);
        cout << "Sin " << a << "deg = " << sinf(radian) << endl;
    }
    inline void CoSine(float a)
    {
        float radian = inRadians(a);
        cout << "Cos " << a << "deg = " << cosf(radian) << endl;
    }
    inline void Tangent(float a)
    {
        float radian = inRadians(a);
        cout << "Tan " << a << "deg = " << tanf(radian) << endl;
    }
    inline void CoSecent(float a)
    {
        float radian = inRadians(a);
        cout << "Cosec " << a << "deg = " << 1 / sinf(radian) << endl;
    }
    inline void Secent(float a)
    {
        float radian = inRadians(a);
        cout << "Sec " << a << "deg = " << 1 / cosf(radian) << endl;
    }
    inline void CoTangent(float a)
    {
        float radian = inRadians(a);
        cout << "Cot " << a << "deg = " << 1 / tanf(radian) << endl;
    }
};
class SimpleIntrest
{
public:
    inline void simpleIntrest(float a, float b, float c)
    {
        cout << "The simple intrest is: " << (a * b * c) / 100 << endl;
    }
};
class Percentage
{
public:
    inline void precent(float a, float b)
    {
        cout << "Precntage is " << (a / b) * 100 << endl;
    }
};
class Exponential
{
public:
    inline void SquareRoot(float a)
    {
        cout << "Square root of " << a << " is " << sqrtf(a) << endl;
    }
    inline void CubeRoot(float a)
    {
        cout << "Cube root of " << a << " is " << cbrtf(a) << endl;
    }
    inline void XRoot(float a, float b)
    {
        cout << b << " root of " << a << " is " << powf(a, 1 / b) << endl;
    }
    inline void Square(float a)
    {
        cout << "Square of " << a << " is " << powf(a, 2) << endl;
    }
    inline void Cube(float a)
    {
        cout << "Cube of " << a << " is " << powf(a, 3) << endl;
    }
    inline void power(float a, float b)
    {
        cout << a << " to the power " << b << " is " << powf(a, b) << endl;
    }
};