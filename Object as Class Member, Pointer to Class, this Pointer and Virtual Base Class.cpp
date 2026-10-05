#include <iostream>
using namespace std;
class Address
{
public:
    string city;

    Address()
    {
        city = "Kakinada";
    }
};
class Student
{
    Address addr;

public:
    void display()
    {
        cout << "City: " << addr.city << endl;
    }
};
class Test
{
public:
    int marks;

    void display()
    {
        cout << "Marks: " << marks << endl;
    }
};
class Number
{
    int value;

public:
    void setValue(int value)
    {
        this->value = value;
    }

    void display()
    {
        cout << "Value: " << this->value << endl;
    }
};
class A
{
public:
    int x;

    A()
    {
        x = 100;
    }
};
class B : virtual public A
{
};
class C : virtual public A
{
};
class D : public B, public C
{
public:
    void display()
    {
        cout << "Virtual Base Class value: " << x << endl;
    }
};
int main()
{
    cout << "--- Object as Class Member ---" << endl;
    Student s;
    s.display();
    cout << "\n--- Pointer to Class ---" << endl;
    Test t;
    t.marks = 90;
    Test *ptr = &t;
    ptr->display();
    cout << "\n--- this Pointer ---" << endl;
    Number n;
    n.setValue(50);
    n.display();
    cout << "\n--- Virtual Base Class ---" << endl;
    D obj;
    obj.display();
    return 0;
}
