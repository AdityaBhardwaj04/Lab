//WAP to display data of two different type using function template
#include<iostream>
using namespace std;
template <typename T>
T display(T data)
{
    cout<<data<<endl;
    return data;
}
int main()
{
    int data1;
    char data2;
    data1 = display<int>(400);
    data2 = display<char>('A');
}