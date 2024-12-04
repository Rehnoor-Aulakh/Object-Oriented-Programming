#include<iostream>
using namespace std;

class BC
{
    public:
    int b;
    void show()
    {
        cout<<"b = "<<b<<endl;
    }
};

class DC: public BC
{
    public:
    int d;
    void show()
    {
        cout<<"b = "<<b<<endl;
        cout<<"d = "<<d<<endl;
    }
};

int main()
{
    BC *bptr;   //pointer of the base class
    BC base;    //object of the base class
    bptr=&base; 
    cout<<"pointer of base class points to base class"<<endl;
    bptr->b=100;
    bptr->show();
    DC derived; //object of derived class
    bptr=&derived;
    cout<<"pointer of base class points to derived class"<<endl;
    bptr->b=200;
    bptr->show();
    //It will call the show function of the base class only but through the derived class
    DC *dptr;   //pointer of the derived class
    dptr=&derived;  
    cout<<"Pointer of derived class points to derived class whose b value we have already set"<<endl;
    dptr->d=300;
    dptr->show();
    //bptr also points to the derived class object and by typecasting the base class pointer to the derived class pointer, we can access the data members and member functions of the derived class.
    cout<<"using ((DC *)bptr)"<<endl;
    ((DC *)bptr)->d=400;
    ((DC *)bptr)->show();
}