#ifndef ACCOUNT_H
#define ACCOUNT_H

#pragma once
    #include <string>
    using namespace std;
    class Account
    {
    public:
        void set_balance(double bal)
        {
            balance = bal;
        }
        double get_balance()
        {
            return balance;
        }
        void set_name(string n);
        string get_name();
        bool deposit(double amount);
        bool withdraw(double amount);
    private:
        string name;
        double balance;
    };

#endif