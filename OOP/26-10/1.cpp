//WAP to throw and handle "Division by zero exception"
#include<iostream>
#include<stdexcept>
using namespace std;
float division(float num, float den)
{
    if(den == 0)
    {
        throw runtime_error("Math error: Attempted to divide by zero\n");
    }
    return (num/den);
}
int main()
{
    float num, den, result;
    cout<<"Enter numerator:";
    cin >>num;
    cout<<"Enter denominator:";
    cin >>den;
    try
    {
        result = division(num, den);
        cout<<"The quotient is: "<<result<<endl;
    }
    catch(runtime_error& e)
    {
        cout << "Exception occurred" << endl<< e.what();
    }
    
}