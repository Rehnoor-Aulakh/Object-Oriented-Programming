#include<iostream>
using namespace std;

class Transaction;      //Forward Declaration

class Account
{
    double balance;
    public:
    Account()
    {
        balance=0;
    }
    Account(double balance)
    {
        this->balance=balance;
    }
    Account(Account& acc)
    {
        balance=acc.balance;
    }
    double getBalance()
    {
        return balance;
    }
    friend void transferMoney(Account sender, Account reciever, Transaction &t);
};

class Transaction
{
    double amount;
    public:
    Transaction(int amount)
    {
        this->amount=amount;
    }
    friend void transferMoney(Account, Account, Transaction &);
};

void transferMoney(Account sender, Account reciever, Transaction &t)
{
    double amount=t.amount;
    if(amount>sender.balance)
    {
        cout<<"Not Sufficient Balance!!!"<<endl;
        return;
    }
    else
    {
        sender.balance-=amount;
        reciever.balance+=amount;

        cout<<"Updated Balance of Sender: "<<sender.balance<<endl;
        cout<<"Updated Balance of Reciever: "<<reciever.balance<<endl;
    }
}

int main()
{
    Account sender(1000);
    Account reciever(500);
    Transaction t(200);
    transferMoney(sender,reciever,t);
}

