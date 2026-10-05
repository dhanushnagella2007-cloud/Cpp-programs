#include <iostream>
using namespace std;

class Student
{
private:
    int marks;

public:
    void setMarks(int m = 50)
    {
        marks = m;
    }

    void display()
    {
        cout << "Marks = " << marks << endl;
    }
};

int main()
{
    Student s;

    s.setMarks();
    s.display();

    s.setMarks(85);
    s.display();

    return 0;
}
