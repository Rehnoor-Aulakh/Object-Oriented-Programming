#include<iostream>
#include<string>
using namespace std;

class Account
{
    public:
    long accno;
    long transactionID;
    string transactionType;
    double balance;
    long depositAmount(const long to, const long from, const double amount)
    {
        transactionType="Debit";
        if(to==accno)
        {
            balance+=amount;
            return ++transactionID;
        }
        return -1;
        //For invalid transaction
    }
    long creditAmount(const long to, const long from, const double amount)
    {
        transactionType="Credit";
        if(from==accno && amount<=balance)
        {
            balance-=amount;
            return ++transactionID;
        }
        return -1;
    }
    void displayDetails()
    {
        cout<<"Account Number: "<<accno<<endl;
        cout<<"Remaining Balance: "<<balance<<endl;
    }

};

int main()
{
    Account acc1;
    acc1.accno=1001;
    acc1.balance=10000;
    acc1.transactionID=10000;
    Account acc2;
    acc2.accno=1002;
    acc2.balance=20000;
    acc2.transactionID=20000;

    cout<<"Transaction ID: "<<acc1.depositAmount(1001,1002,5000)<<"\t Transaction Type: "<<acc1.transactionType<<endl;
    acc1.displayDetails();
    cout<<"Transaction ID: "<<acc2.creditAmount(1001,1002,8000)<<"\t Transaction Type: "<<acc2.transactionType<<endl;
    acc2.displayDetails();

    Account acc[10];
    for(int i=0;i<10;i++)
    {
        acc[i].accno=1003+i;
        acc[i].transactionID=3000*i;
        acc[i].balance=400+1000*i;
    }
    for(int i=0;i<10;i++)
    {
        acc[i].displayDetails();
    }

}