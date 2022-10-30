// WAP to demonstrate multiple catch and catch all
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number" << endl;
    cin >> n;
    try
    {
        if (n == 0)
            throw(n);
        else if (n > 0)
            throw('p');
        else if (n < 0)
            throw(0.0);
    }
    catch (int k)
    {
        cout << "Number is zero" << endl;
    }
    catch (char a)
    {
        cout << "Number is greater tha zero" << endl;
    }
    catch (double f)
    {
        cout << "Number is less than zero" << endl;
    }
    catch (...)
    {
        cout << "Enter a valid value" << endl;
    }
    return 0;
}