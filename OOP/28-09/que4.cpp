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
class sports : virtual public Student
{
protected:
    int m1, m2, m3, m4, m5; 
public:
    sports()
    {
        cout << "Input marks: \n";
        cout << "Subject 1: ";
        cin >> m1;
        cout << "Subject 2: ";
        cin >> m2;
        cout << "Subject 3: ";
        cin >> m3;
        cout << "Subject 4: ";
        cin >> m4;
        cout << "Subject 5: ";
        cin >> m5;
        cout << endl;
        cout << "Subject 1:" << m1 << endl;
        cout << "Subject 2:" << m2 << endl;
        cout << "Subject 3:" << m3 << endl;
        cout << "Subject 4:" << m4 << endl;
        cout << "Subject 5:" << m5 << endl;
    }
    void sports_percentage()
    {
        int total = m1 + m2 + m3 + m4 + m5;
        int per = total / 5;
        cout << "The total marks is : " << total << endl;
        cout << "The percentage is : " << per << "%" << endl;
    }
};

class Test : virtual public Student
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
        cout << "Subject 3: "; v 
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
    sports sm;
    s.percentage();
    sm.sports_percentage();
}