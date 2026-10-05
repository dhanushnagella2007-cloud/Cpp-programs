#include <iostream>
using namespace std;
class Base
{
public:
    virtual void display()
    {
        cout << "Base class display()" << endl;
    }
};
class Derived : public Base
{
public:
    void display() override
    {
        cout << "Derived class display()" << endl;
    }
};
int main()
{
    Base *ptr;

    Derived obj;

    ptr = &obj;

    ptr->display();

    return 0;
}
