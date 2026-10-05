#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, d, root1, root2;

    cout << "Enter a, b and c: ";
    cin >> a >> b >> c;

    d = b * b - 4 * a * c;

    if (d > 0)
    {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);

        cout << "Roots are real and distinct." << endl;
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    }
    else if (d == 0)
    {
        root1 = -b / (2 * a);

        cout << "Roots are real and equal." << endl;
        cout << "Root 1 = Root 2 = " << root1 << endl;
    }
    else
    {
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-d) / (2 * a);

        cout << "Roots are complex." << endl;
        cout << "Root 1 = " << realPart << " + "
             << imaginaryPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - "
             << imaginaryPart << "i" << endl;
    }

    return 0;
}
