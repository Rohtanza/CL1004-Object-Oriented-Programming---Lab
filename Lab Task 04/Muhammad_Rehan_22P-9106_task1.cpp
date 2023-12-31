// Muhammad Rehan | 22P-9016 | BSE-2A | OOP Lab 04 Task 01 |
#include <iostream>
#include <string>
#include <stdbool.h>
using namespace std;
class Account
{
    string name;
    // i am using Double as it is better then float.
    double balance;

public:
    void nameSetter(string accountName)
    {
        name = accountName;
    }

    void balanceSetter(double accountBalance)
    {
        balance = accountBalance;
    }

    string nameGetter()
    {
        return name;
    }

    double balanceGetter()
    {
        return balance;
    }

    void depositAmount(double amount)
    {
        balance = balance + amount;
    }

    void withdrawAmount(double amount)
    {
        if (amount <= balance)
        {
            balance = balance - amount;
        }
        else
        {
            cout << "\n\tYou dont have sufficient balance in your account" << endl;
        }
    }
};
Account createAccount(void);
int main(void)
{
    Account bankAccount = createAccount();
    // using nested while loops to keep the menu proccess goind till entered option 4.
    while (true)
    {
        int option;
        double amount;
        while (true)
        {
            cout << "\n1. Display Balance\n2. Deposit Amount\n3. Withdraw Amount\n4. Exit\n=>", cin >> option;
            switch (option)
            {
            case 1:
                cout << "\n\tYour Current Balance is : " << bankAccount.balanceGetter() << endl;
                break;
            case 2:
                cout << "\n\tKinldy Enter the amount you want to deposit: ", cin >> amount, bankAccount.depositAmount(amount);
                break;
            case 3:
                cout << "\n\tKindly Enter the amount you want to withdraw: ", cin >> amount, bankAccount.withdrawAmount(amount);
                break;
            case 4:
                return 0;
            default:
                cout << "\n\tKindly Enter a valid option" << endl;
            }
            break;
        }
    }
}
Account createAccount(void)
{
    Account bankAccount;
    string name;
    double balance;
    cout << "\n\tKindly Enter the name for the bank Account: ", getline(cin, name);
    cout << "\n\tKindly Enter the amount you to want to start your account with :", cin >> balance;
    bankAccount.nameSetter(name);
    bankAccount.balanceSetter(balance);
    return bankAccount;
}