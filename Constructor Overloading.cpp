#include <iostream>
using namespace std;

class Student
{
private:
    int roll;
    string name;

public:
    Student()
    {
        roll = 0;
        name = "Unknown";
    }
    Student(int r)
    {
        roll = r;
        name = "Unknown";
    }

    // Constructor with two parameters
    Student(int r, string n)
    {
        roll = r;
        name = n;
    }

    void display()
    {
        cout << "Roll Number: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << endl;
    }
};

int main()
{
    Student s1;
    Student s2(101);
    Student s3(102, "Dhanush");

    s1.display();
    s2.display();
    s3.display();

    return 0;
}
