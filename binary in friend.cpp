#include <iostream>
using namespace std;

class Number
{
    int x;

public:
    Number(int a)
    {
        x = a;
    }
    friend Number operator+(Number n1, Number n2);

    void display()
    {
        cout << "Value = " << x << endl;
    }
};
Number operator+(Number n1, Number n2)
{
    Number temp(0);
    temp.x = n1.x + n2.x;
    return temp;
}

int main()
{
    Number n1(10);
    Number n2(20);
    Number n3(0);

    n3 = n1 + n2;

    cout << "First number: ";
    n1.display();

    cout << "Second number: ";
    n2.display();

    cout << "Sum: ";
    n3.display();

    return 0;
}

