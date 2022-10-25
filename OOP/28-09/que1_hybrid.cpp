#include <iostream>
using namespace std;
class Baseclass
{
public:
    Baseclass()
    {
        cout << "This is a Baseclass\n";
    }
};
class D1
{
public:
    D1()
    {
        cout << "This is Derived class\n";
    }
};
class D2 : public Baseclass
{
};
class D3 : public Baseclass, public D1
{
};
int main()
{
    D3 o;
    return 0;
}
