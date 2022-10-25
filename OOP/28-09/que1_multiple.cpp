#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    A()
    {
        cout << "Base Class 1" << endl;
    }
};
class C
{
public:
    C()
    {
        cout << "Base class 2" << endl;
    }
};
class B : public A, public C
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