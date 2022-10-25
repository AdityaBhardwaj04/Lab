#include<iostream>
using namespace std;
class Account
{
    protected:
        int acc_no;
        string name;
        int balance;
    public:
        void input()
        {
            cout<<"Enter Account number, Name, Balance:";
            cin>>acc_no>>name>>balance;
        }
        virtual void showbal()
        {
            cout<<"Balance: "<<balance<<endl;
        }
};
class saving: protected Account
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
            cout<<"Enter amount you wish to deposit: ";
            cin>>d;
            balance = balance + d;
        }
        void withdraw()
        {
            int w;
            cout<<"Enter amount you wish to withdraw: ";
            cin>>w;
            if(balance - w < min_bal)
            {
                cout<<"Sorry! Insufficient amount.";
                char ch;
                cout<<"Remaining amount: "<<balance <<endl;
                cout<<"Withdraw ₹"<<balance<<endl<<"Confirm withdrawal: (y/n)";
                cin>>ch;
                if(ch == 'y' || 'Y')
                {
                    cout<<"Withdrawn"<<endl;
                    cout<<"Remaining balance: ₹ 0";
                    balance = 0;
                }
                else
                {
                    cout<<"Transaction cancelled!";
                }
            }
            else
            {
                balance = balance - w;
            }
        }
        void showbal()
        {
            cout<<"Current Balance:"<<balance<<endl;
        }
};
class current : protected Account
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
            cout<<"Enter amount you wish to deposit: ";
            cin>>d;
            if(overdue > d)
            {
                overdue = overdue - d;
            }
            else
            {
                d = d - overdue;
                balance = balance + d;
                overdue = 0;
            }
        }
        void withdraw()
        {
            int w;
            cout<<"Enter amount you wish to withdraw: ";
            cin>>w;
            if(overdue != 0)
            {
                cout<<"Sorry! Please clear your overdue of "<<overdue;
            }
            else
            {
                if(balance - w > 0)
                {
                    balance = balance - w;
                }
                else
                {
                    cout<<"Only "<<balance<<"can be withdrawn!";
                    char ch;
                    cout<<"Do you want to continue with the transaction: (Y/N)";
                    cin>>ch;
                    if(ch == 'y' || 'Y')
                    {
                        cout<<"Withdrawn!"<<endl;
                    }
                    else
                    {
                        cout<<"Request Cancelled!";
                    }
                }
            }
        }
        void showbal()
        {
            cout<<"Current Balance:"<<balance<<endl;
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