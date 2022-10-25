#include<iostream>
#include<string>
#include "Account.h"
using namespace std;

int main()
{
    Account frank_account;
    frank_account.set_name("Frank's Account");
    frank_account.set_balance(1000.0);
    if(frank_account.deposit(200))
        cout<<"Deposit OK";
    else
        cout<<"Deposit not allowed!";
    if(frank_account.withdraw(1500.0))
    {
        cout<<"Withdraw OK";
    }
    else
        cout<<"Withdraw not allowed!";
    return 0;
}