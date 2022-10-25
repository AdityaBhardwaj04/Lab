// Create a class which stores account number, customer name and balance. Derive two
// classes from 'Account' class: 'Savings' and 'Current'. The 'Savings' class stores
// minimum balance. The 'Current' class stores the over-due amount. Include member
// functions in the appropriate class for
// -deposit money
// -withdraw [For saving account minimum balance should be checked.]
// [For current account overdue amount should be calculated.]
// -display balance
// Display data from each class using virtual function.
#include <iostream>
using namespace std;
class bank
{
    protected:
        int accno;
        int balance;
        char name[40];
    public:
        void input()
        {
            cout << "Enter acc number, Name, Balance:";
            cin >> accno >> name >> balance;
        }
};
class saving : protected bank
{
    int min_bal;
    public:
        saving()
        {
            min_bal = 5000;
            input();
        }
        void deposit()
        {
        int d;
        cout << "The amount you would like to deposit:";
        cin >> d;
        balance += d;
        }
        void withdraw()
        {
        int d;
        cout << "Enter the amount you would like to withdraw:";
        cin >> d;
        if (balance - d < min_bal)
        {
        cout << "Sorry only " << balance - d << " can be withdrawn :(" << endl;
        char ch;
        cout << "Confirm your transaction (y/n:";
        cin >> ch;
        if (ch == 'y')
        {
        cout << "Withdrwan :)" << endl;
        balance -= d;
        }
        else
        {
        cout << "request cancelled" << endl;
        }
        }
        else
        {
        balance -= d;
        }
        }
        void showbal()
        {
        cout << "current balance is:" << balance << endl;
        }
        };
class current : protected bank
{
    int overdue;
    public:
        current()
        {
        overdue = 5000;
        input();
        }
        void deposit()
        {
        int d;
        cout << "The amount you would like to deposit:";
        cin >> d;
        if (overdue > d)
        {
        overdue -= d;
        }
        else{
        d -= overdue;
        overdue = 0;
        balance += d;
        }
        }
        void withdraw()
        {
        int d;
        cout << "Enter the amount you would like to withdraw:";
        cin >> d;
        if(overdue!=0)
        {
        cout<<"Sorry you can't withdraw please clear your dues first :)"<<endl;
        }
        else
        {
        if(balance-d>0)
        {
        balance-=d;
        }
        else
        {
        cout<<"only "<<balance<<" can be withdrawn"<<endl;
        }
        char ch;
        cout << "Confirm your transaction (y/n:";
        cin >> ch;
        if (ch == 'y')
        {
        cout << "Withdrwan :)" << endl;
        }
        else
        {
        cout << "request cancelled" << endl;
        }
        }
        }
        void showbal()
        {
        cout << "current balance is:" << balance << endl;
        }
};
int main()
{
    saving s;
    s.deposit();
    s.withdraw();
    s.showbal();
    current c;
    c.deposit();
    c.withdraw();
    c.showbal();
    return 0;
}