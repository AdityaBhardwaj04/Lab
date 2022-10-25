#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout << "Base class" << endl;
    }
};

class B : public A
{
public:
    B()
    {
        cout << "Derived Class" << endl;
    }
};
int main()
{
    B b;
    return 0;
}