// WAP to throw and handle "Array of bound" exception
#include <iostream>
#include <stdexcept>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Enter index to accessed: ";
    int i;
    cin >> i;
    int elt;
    if (i < 0 || i > 4)
    {
        throw runtime_error("Index cannot be accessed.");
    }
    try
    {
        elt = arr[i];
        cout << "The element at index " << i << ": " << elt;
    }
    catch (runtime_error &e)
    {
        cout << "Exception occured" << endl
             << e.what();
    }
}