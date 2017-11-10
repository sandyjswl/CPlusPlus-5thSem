//Create a Account class in C++ which contains a static member variable Bank Name and a Non Static member variable Balance
// and two member functions deposit() and withdraw()

// Inherit savings account amd Recurring account classes from Account class. Each of these derived classes contains members variable
//account number and interest rate.

// Define proper constructor destructor and functions


#include <iostream>
using namespace std;

class Account{
    static string bank_name;
    int balance;

public:

    Account(int deposit){
//        bank_name="SBI";
        balance=deposit;
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
    SavingsAccount(int accountNumber, int interestRate, int deposit): Account(deposit){
        account_number=accountNumber;
        interest_rate=interestRate;
    }

    void showSavings()
    {
        cout<<"The Savings Account Number is  "<<account_number<<endl;
        cout<<"The Interest rate is  "<<interest_rate<<endl;
        currentBalance();
    }


};

class RecurringAccount : public Account{
    int account_number;
    int interest_rate;
public:
    RecurringAccount(int accountNumber, int interestRate, int deposit): Account(deposit){
        account_number=accountNumber;
        interest_rate=interestRate;
    }

    void showRecurring()
    {
        cout<<"The Account Number is  "<<account_number<<endl;
        cout<<"The Interest rate is  "<<interest_rate<<endl;
        currentBalance();
    }

};
string Account :: bank_name="CBI";
int main() {
    int accountNumber,interestRate,depositAmount;
    int ch,ch1;
    SavingsAccount savings(1921,6,1500);
    RecurringAccount recurring(1225,4,2000);
    savings.deposit(1200);
    recurring.withdraw(500);
    savings.showSavings();
    recurring.showRecurring();

}
