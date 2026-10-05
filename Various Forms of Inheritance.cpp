#include <iostream>
using namespace std;
class A
{
public:
    void showA()
    {
        cout << "Class A" << endl;
    }
};
class B : public A
{
public:
    void showB()
    {
        cout << "Class B - Single Inheritance" << endl;
    }
};
class C
{
public:
    void showC()
    {
        cout << "Class C" << endl;
    }
};
class D
{
public:
    void showD()
    {
        cout << "Class D" << endl;
    }
};
class E : public C, public D
{
public:
    void showE()
    {
        cout << "Class E - Multiple Inheritance" << endl;
    }
};
class F
{
public:
    void showF()
    {
        cout << "Class F" << endl;
    }
};
class G : public F
{
public:
    void showG()
    {
        cout << "Class G" << endl;
    }
};
class H : public G
{
public:
    void showH()
    {
        cout << "Class H - Multilevel Inheritance" << endl;
    }
};
class I
{
public:
    void showI()
    {
        cout << "Class I - Base class" << endl;
    }
};
class J : public I
{
public:
    void showJ()
    {
        cout << "Class J - Derived class" << endl;
    }
};
class K : public I
{
public:
    void showK()
    {
        cout << "Class K - Derived class" << endl;
    }
};
class L
{
public:
    void showL()
    {
        cout << "Class L" << endl;
    }
};
class M : public L
{
public:
    void showM()
    {
        cout << "Class M" << endl;
    }
};
class N
{
public:
    void showN()
    {
        cout << "Class N" << endl;
    }
};
class O : public M, public N
{
public:
    void showO()
    {
        cout << "Class O - Hybrid Inheritance" << endl;
    }
};
int main()
{
    cout << "\n--- Single Inheritance ---\n";
    B obj1;
    obj1.showA();
    obj1.showB();
    cout << "\n--- Multiple Inheritance ---\n";
    E obj2;
    obj2.showC();
    obj2.showD();
    obj2.showE();
    cout << "\n--- Multilevel Inheritance ---\n";
    H obj3;
    obj3.showF();
    obj3.showG();
    obj3.showH();
    cout << "\n--- Hierarchical Inheritance ---\n";
    J obj4;
    obj4.showI();
    obj4.showJ();
    K obj5;
    obj5.showI();
    obj5.showK();
    cout << "\n--- Hybrid Inheritance ---\n";
    O obj6;
    obj6.showL();
    obj6.showM();
    obj6.showN();
    obj6.showO();
    return 0;
}
