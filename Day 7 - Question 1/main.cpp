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
        currentBalance();
    }

};
string Account :: bank_name="CBI";
int main() {
    int accountNumber,interestRate,depositAmount;
    int ch,ch1;
    cout<<"Enter the Account Number, Interest Rate and Deposit Amount::"<<endl;
    cin>>accountNumber;
    cin>>interestRate;
    cin>>depositAmount;
    cout<<"Select the Account type"<<endl;
    cout<<"1.Savings\n2.Recurring"<<endl;
    cin>>ch;
    if (ch==1){
        SavingsAccount obj1(accountNumber, interestRate,depositAmount);
        obj1.showSavings();
        while(1){
            cout<<"Select from the choice\n1.Deposit\n2.Withdraw\n3.Display Balance\n4.Exit"<<endl;
            cin>>ch1;
            switch (ch1){
                case 1: cout<<"Enter Amount to Deposit"<<endl;
                        int amount;
                        cin>>amount;
                        obj1.deposit(amount);
                        break;
                case 2:
                        cout<<"Enter Amount to Withdraw"<<endl;
                        int amount1;
                        cin>>amount1;
                         obj1.withdraw(amount1);
                        break;
                case 3:
                        obj1.showSavings();
                        break;
                case 4:
                        exit(0);
            }


        }
    }
    else{
        RecurringAccount obj2(accountNumber,interestRate,depositAmount);
        obj2.showRecurring();
        while(1){
            cout<<"Select from the choice\n1.Deposit\n2.Withdraw\n3.Display Balance\n4.Exit"<<endl;
            cin>>ch1;
            switch (ch1){
                case 1: cout<<"Enter Amount to Deposit"<<endl;
                    int amount;
                    cin>>amount;
                    obj2.deposit(amount);
                    break;
                case 2:
                    cout<<"Enter Amount to Withdraw"<<endl;
                    int amount1;
                    cin>>amount1;
                    obj2.withdraw(amount1);
                    break;
                case 3:
                    obj2.showRecurring();
                    break;
                case 4:
                    exit(0);
            }


        }
    }



}