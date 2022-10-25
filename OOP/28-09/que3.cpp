#include <iostream>
using namespace std;
class Student
{
protected:
    string name;
    int roll_number, age;

public:
    Student()
    {
        cout << "Input roll no:";
        cin >> roll_number;
        cout << "Enter name" << endl;
        cin >> name;
        cout << "Input age: ";
        cin >> age;
        cout << endl;
        cout << "Roll number: " << roll_number << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
class Test : public Student
{
protected:
    int s1, s2, s3, s4, s5;

public:
    Test()
    {
        cout << "Input marks: \n";
        cout << "Subject 1: ";
        cin >> s1;
        cout << "Subject 2: ";
        cin >> s2;
        cout << "Subject 3: ";
        cin >> s3;
        cout << "Subject 4: ";
        cin >> s4;
        cout << "Subject 5: ";
        cin >> s5;
        cout << endl;
        cout << "Subject 1:" << s1 << endl;
        cout << "Subject 2:" << s2 << endl;
        cout << "Subject 3:" << s3 << endl;
        cout << "Subject 4:" << s4 << endl;
        cout << "Subject 5:" << s5 << endl;
    }
    void percentage()
    {
        int total = s1 + s2 + s3 + s4 + s5;
        int per = total / 5;
        cout << "The total marks is : " << total << endl;
        cout << "The percentage is : " << per << "%" << endl;
    }
};
int main()
{
    Test s;
    s.percentage();
}