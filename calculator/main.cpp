//* Calulator --> File-2

#include <iostream>
#include "./operators.cpp"
using namespace std;

int main(int argc, char const *argv[])
{
    int Opr;
    cout << "Calculator By - Syed Adeeb \n"
         << endl;
    while (1)
    {
    start:
        cout << "\n\n1. Arthematic\n2. Perimeter\n3. Area\n4. Volume\n5. Trignometric\n6. Simple Intrest\n7. Percentage\n8. Exponential\nChooese the operator: ";
        cin >> Opr;

        if (Opr == 1) // Arthematic
        {
            float a, b;
            char c;
            Arthematic d;
            cout << "Enter the first number ";
            cin >> a;
            cout << "Choose the operator [ + - * / ]: ";
            cin >> c;
            cout << "Enter the Second number ";
            cin >> b;
            char e;
            if (c == '+')
            {
                d.Addition(a, b);
            }
            else if (c == '-')
            {
                d.Subtraction(a, b);
            }
            else if (c == '*')
            {
                d.Multiplication(a, b);
            }
            else if (c == '/')
            {
                d.Division(a, b);
            }

            else
            {
                cout << "Please choose the correct operator" << endl;
            }
        }

        else if (Opr == 2) // Perimeter
        {
            int PeriOpr;
            Perimeter c;
            cout << "1. Square\n2. Rectangle\n3. Triangle\n4. Circle\nSelect The Operator: ";
            cin >> PeriOpr;
            if (PeriOpr == 1)
            {
                float side;
                cout << "Enter the side ";
                cin >> side;
                c.square(side);
            }
            else if (PeriOpr == 2)
            {
                float length, breadth;
                cout << "Enter the length ";
                cin >> length;
                cout << "Enter the Width ";
                cin >> breadth;
                c.rectangle(length, breadth);
            }
            else if (PeriOpr == 3)
            {
                float side, side1, side2;
                int triangle;
                cout << "1. Equilateral triangle \n2. Isosceles Triangle\n3. Scelene Triangle\nSelect the triangle ";
                cin >> triangle;

                if (triangle == 1)
                {
                    cout << "Enter the side ";
                    cin >> side;
                    c.eqlTriangle(side);
                }

                else if (triangle == 2)
                {
                    cout << "Enter the equal side ";
                    cin >> side;
                    cout << "Enter the other side ";
                    cin >> side1;
                    c.isoTriangle(side, side1);
                }

                else if (triangle == 3)
                {
                    cout << "Enter the first side ";
                    cin >> side;
                    cout << "Enter the second side ";
                    cin >> side1;
                    cout << "Enter the third side ";
                    cin >> side2;
                    c.scalTriangle(side, side1, side2);
                }

                else
                {
                    cout << "Please choose the correct traingle " << endl;
                }
            }

            else if (PeriOpr == 4)
            {
                float radius;
                cout << "Enter the radius ";
                cin >> radius;
                c.circle(radius);
            }
        }

        else if (Opr == 3) // Area
        {
            int dimensions;
            cout << "1. Area Two Dimensions\n2. Area Three Dimensions\nChoose the Dimension: ";
            cin >> dimensions;
            if (dimensions == 1)
            {

                Area_2D c;
                int area;
                cout << "1. Square\n2. Recatngle\n3. Triangle\n4. Circle\n5. Paralleogram\n6. Trapezium\nChoose the Area: ";
                cin >> area;
                if (area == 1)
                {
                    float side;
                    cout << "Enter the side: ";
                    cin >> side;
                    c.square(side);
                }
                else if (area == 2)
                {
                    float length;
                    float breadth;
                    cout << "Enter the length: ";
                    cin >> length;
                    cout << "Enter the width: ";
                    cin >> breadth;
                    c.rectangle(length, breadth);
                }
                else if (area == 3)
                {
                    float base;
                    float height;
                    cout << "Enter the base: ";
                    cin >> base;
                    cout << "Enter the heigth: ";
                    cin >> height;
                    c.triangle(base, height);
                }
                else if (area == 4)
                {
                    float radius;
                    cout << "Enter the radius: ";
                    cin >> radius;
                    c.circle(radius);
                }
                else if (area == 5)
                {
                    float base;
                    float height;
                    cout << "Enter the base: ";
                    cin >> base;
                    cout << "Enter the height: ";
                    cin >> height;
                    c.parallelogram(base, height);
                }
                else if (area == 6)
                {
                    float side1;
                    float side2;
                    float heigth;
                    cout << "Enter the first parallel side: ";
                    cin >> side1;
                    cout << "Enter the second parallel side: ";
                    cin >> side2;
                    cout << "Enter the height: ";
                    cin >> heigth;
                    c.trapezium(side1, side2, heigth);
                }
                else
                {
                    cout << "Please use the correct area " << endl;
                }
            }

            else if (dimensions == 2)
            {
                Area_3D c;
                int area;
                cout << "1. Cube\n2. Cuboid\n3. Cylinder\n4. Cone\n5. Sphere\n6. Hemisphere" << endl;
                cout << "Choose the area: ";
                cin >> area;

                if (area == 1)
                {
                    float side;
                    cout << "Enter the side: ";
                    cin >> side;
                    c.cube(side);
                }
                else if (area == 2)
                {
                    float length;
                    float width;
                    float heigth;
                    cout << "Enter the length: ";
                    cin >> length;
                    cout << "Enter the width: ";
                    cin >> width;
                    cout << "Enter the heigth: ";
                    cin >> heigth;
                    c.cuboid(length, width, heigth);
                }
                else if (area == 3)
                {
                    float radius;
                    float height;
                    cout << "Enter the radius: ";
                    cin >> radius;
                    cout << "Enter the height: ";
                    cin >> height;
                    c.cylinder(radius, height);
                }
                else if (area == 4)
                {
                    float radius;
                    float height;
                    cout << "Enter the radius: ";
                    cin >> radius;
                    cout << "Enter the height: ";
                    cin >> height;
                    c.cone(radius, height);
                }
                else if (area == 5)
                {
                    float radius;
                    cout << "Enter the radius: ";
                    cin >> radius;
                    c.sphere(radius);
                }
                else if (area == 6)
                {
                    float radius;
                    cout << "Enter the radius: ";
                    cin >> radius;
                    c.hemisphere(radius);
                }
                else
                {
                    cout << "Please choose the correct side " << endl;
                }
            }
        }

        else if (Opr == 4) // Volume
        {
            Volume c;
            int Volume;
            cout << "1. Cube\n2. Cuboid\n3. Cylinder\n4. Sphere\n5. Right Circular Cone " << endl;
            cout << "Choose the operator: ";
            cin >> Volume;
            if (Volume == 1)
            {
                float side;
                cout << "Enter the side: ";
                cin >> side;
                c.cube(side);
            }
            else if (Volume == 2)
            {
                float length;
                float width;
                float height;
                cout << "Enter the length: " << endl;
                cin >> length;
                cout << "Enter the width: " << endl;
                cin >> width;
                cout << "Enter the height: " << endl;
                cin >> height;
                c.cuboid(length, width, height);
            }
            else if (Volume == 3)
            {
                float radius;
                float height;
                cout << "Enter the radius: ";
                cin >> radius;
                cout << "Enter the height: ";
                cin >> height;
                c.cylinder(radius, height);
            }
            else if (Volume == 4)
            {
                float radius;
                cout << "Enter the radius: ";
                cin >> radius;
                c.sphere(radius);
            }
            else if (Volume == 5)
            {
                float radius;
                float height;
                cout << "Enter the radius: ";
                cin >> radius;
                cout << "Enter the height: ";
                cin >> height;
                c.RightCircularCone(radius, height);
            }
        }

        else if (Opr == 5) // Trignometry
        {
            Trignometric c;
            int Trigno;
            float radian;
            cout << "1. Sine\n2. Cosine\n3. Tangent\n4. CoSecent\n5. Secent\n6. CoTangent " << endl;
            cout << "Select the function: ";
            cin >> Trigno;
            cout << "Enter the radian: ";
            cin >> radian;

            if (Trigno == 1)
            {
                c.Sine(radian);
            }

            else if (Trigno == 2)
            {
                c.CoSine(radian);
            }

            else if (Trigno == 3)
            {
                c.Tangent(radian);
            }

            else if (Trigno == 4)
            {
                c.CoSecent(radian);
            }

            else if (Trigno == 5)
            {
                c.Secent(radian);
            }

            else if (Trigno == 6)
            {
                c.CoTangent(radian);
            }
            else
            {
                cout << "Please choose the correct function " << endl;
            }
        }

        else if (Opr == 6) // Simple Intrest
        {
            SimpleIntrest c;
            float p, r, t;
            cout << "Enter the Principle: ";
            cin >> p;
            cout << "Enter the Rate: ";
            cin >> r;
            cout << "Enter the Time: ";
            cin >> t;
            c.simpleIntrest(p, r, t);
        }

        else if (Opr == 7) // Percentage
        {
            Percentage c;
            float a, b;
            cout << "Enter the selected number: ";
            cin >> a;
            cout << "Enter the maximux number: ";
            cin >> b;
            c.precent(a, b);
        }

        else if (Opr == 8) // Exponential
        {
            Exponential c;
            int expo;
            cout << "1. Square\n2. Cube\n3. Power\n4. Square Root\n5. Cube Root\n6. nth Root " << endl;
            cout << "Choose the function: ";
            cin >> expo;
            if (expo == 1)
            {
                float root;
                cout << "Enter the number: ";
                cin >> root;
                c.Square(root);
            }
            else if (expo == 2)
            {
                float root;
                cout << "Enter the number: ";
                cin >> root;
                c.Cube(root);
            }
            else if (expo == 3)
            {
                float root, power;
                cout << "Enter the number: ";
                cin >> root;
                cout << "Enter the power: ";
                cin >> power;
                c.power(root, power);
            }
            else if (expo == 4)
            {
                float root;
                cout << "Enter the number: ";
                cin >> root;
                c.SquareRoot(root);
            }
            else if (expo == 5)
            {
                float root;
                cout << "Enter the value: ";
                cin >> root;
                c.CubeRoot(root);
            }
            else if (expo == 6)
            {
                float root, rootValue;
                cout << "Enter the number: ";
                cin >> root;
                cout << "Enter the value of root: ";
                cin >> rootValue;
                c.XRoot(root, rootValue);
            }
            else
            {
                cout << "Please choose the correct method" << endl;
            }
        }

        else
        {
            cout << "Please choose the correct method" << endl;
        }

        char exit;
        cout << "Do you want to continue:[Y/n] ";
        cin >> exit;

        if (exit == 'y' || exit == 'Y')
        {
            goto start;
        }
        else if (exit == 'n')
        {
            goto end;
        }
    }
end:
    cout << "\nThanks for using. Please follow me on instagram @prokximus for more\n " << endl;
    return 0;
}