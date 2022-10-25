#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    A()
    {
        cout << "Base Class" << endl;
    }
};
class C : public A
{
public:
    C()
    {
        cout << "Derived Class 1" << endl;
    }
};
class B : public A
{
public:
    B()
    {
        cout << "Derived Class 2" << endl;
    }
};
int main()
{
    B b;
    C c;
    return 0;
}