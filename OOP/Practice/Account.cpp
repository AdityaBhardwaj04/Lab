#include "Account.h"

void Account::set_name(string n)
{
    name = n;
}
string Account::get_name()
{
    return name;
}
bool Account::deposit(double amount)
{
    if(amount > 0)
        balance += amount;
    return true;
}
bool Account::withdraw(double amount)
{
    if(balance-amount >= 0)
    {
        balance -= amount;
        return true;
    }
    else
        return false;
}