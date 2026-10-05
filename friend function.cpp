#include <iostream>
using namespace std;

class Number
{
private:
    int a;

public:
    Number(int x)
    {
        a = x;
    }
    friend void display(Number n);
};

void display(Number n)
{
    cout << "Value of a = " << n.a << endl;
}

int main()
{
    Number obj(50);

    display(obj);

    return 0;
}
