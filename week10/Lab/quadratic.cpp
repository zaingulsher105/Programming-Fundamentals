#include <iostream>
#include <cmath>
using namespace std;

// Function to solve quadratic equation
void quadratic(double a, double b, double c);


int main()
{
    double a, b, c;

    cout << "Enter value of a: ";
    cin >> a;

    cout << "Enter value of b: ";
    cin >> b;

    cout << "Enter value of c: ";
    cin >> c;

    // Function call
    quadratic(a, b, c);

    return 0;
}



void quadratic(double a, double b, double c)
{
    // discriminant
    double D = b*b - 4*a*c; 

    if(D > 0)
    {
        double x1 = (-b + sqrt(D)) / (2*a);
        double x2 = (-b - sqrt(D)) / (2*a);

        cout << "Two real solutions:\n";
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if(D == 0)
    {
        double x = -b / (2*a);

        cout << "One real solution:\n";
        cout << "x = " << x << endl;
    }
    else
    {
        double realPart = -b / (2*a);
        double imagPart = sqrt(-D) / (2*a);

        cout << "Complex solutions:\n";
        cout << "x1 = " << realPart << " + " << imagPart << "i" << endl;
        cout << "x2 = " << realPart << " - " << imagPart << "i" << endl;
    }
}