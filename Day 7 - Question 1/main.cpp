//Create a Account class in C++ which contains a static member variable Bank Name and a Non Static member variable Balance
// and two member functions deposit() and withdraw()

// Inherit savings account amd Recurring account classes from Account class. Each of these derived classes contains members variable
//account number and interest rate.

// Define proper constructor destructor and functions


#include <iostream>
using namespace std;

class Account{
     string bank_name;
    int balance=0;

public:

    void setBankName(string name)
    {
        Account :: bank_name=name;
    }
    void deposit(int amount)
    {
        balance=balance+amount;
    }
    void withdraw(int amount)
    {
        balance=balance-amount;
    }
    void currentBalance()
    {
        cout<<"The Bank Name is  "<<bank_name<<endl;
        cout<<"The Current Balance of the account is Rs.  "<<balance<<endl;
    }

};

class SavingsAccount : public Account{
    int account_number;
    int interest_rate;
public:
    void setAccountNumber(int acc_num)
    {
        account_number=acc_num;
    }
    void setInterestRate(int rate)
    {
        interest_rate=rate;
    }
    void showSavings()
    {
        cout<<"The Account Number is  "<<account_number<<endl;
        cout<<"The Interest rate is  "<<interest_rate<<endl;
    }


};

class RecurringAccount : public Account{
    int account_number;
    int interest_rate;
public:
    void setAccountNumber(int acc_num)
    {
        account_number=acc_num;
    }
    void setInterestRate(int rate)
    {
        interest_rate=rate;
    }
    void showRecurring()
    {
        cout<<"The Account Number is  "<<account_number<<endl;
        cout<<"The Interest rate is  "<<interest_rate<<endl;
    }

};
int main() {

    cout<<"SAVING ACCOUNT::"<<endl;
    SavingsAccount obj1;
    obj1.setBankName("CBI");
    obj1.setAccountNumber(12958);
    obj1.setInterestRate(5);
    obj1.deposit(5000);
    obj1.currentBalance();
    obj1.showSavings();

    cout<<"\n\nSAVING ACCOUNT::"<<endl;
    RecurringAccount obj2;
    obj2.setBankName("SBI");
    obj2.setAccountNumber(12563);
    obj2.setInterestRate(9);
    obj2.deposit(1000);
    obj2.currentBalance();
    obj2.showRecurring();



}