#include <iostream>
using namespace std;

class Number
{
    int x, y;

public:
    void getData()
    {
        cout << "Enter x and y: ";
        cin >> x >> y;
    }
    void operator-()
    {
        x = -x;
        y = -y;
    }
    Number operator+(Number n)
    {
        Number temp;
        temp.x = x + n.x;
        temp.y = y + n.y;
        return temp;
    }

    void display()
    {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
};

int main()
{
    Number n1, n2, n3;

    cout << "Enter first object values:\n";
    n1.getData();

    cout << "Enter second object values:\n";
    n2.getData();

    n3 = n1 + n2;

    cout << "\nAfter Binary Operator (+):\n";
    n3.display();

    -n1;

    cout << "\nAfter Unary Operator (-):\n";
    n1.display();

    return 0;
}
