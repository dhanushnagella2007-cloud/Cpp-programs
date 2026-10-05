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
    friend void operator-(Number &n);
    friend Number operator+(Number n1, Number n2);

    void display()
    {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
};
void operator-(Number &n)
{
    n.x = -n.x;
    n.y = -n.y;
}

// Binary operator
Number operator+(Number n1, Number n2)
{
    Number temp;

    temp.x = n1.x + n2.x;
    temp.y = n1.y + n2.y;

    return temp;
}

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
