#include<iostream>
using namespace std;

class Base
{
    public:
    void display()
    {
        cout<<"Display Base"<<endl;
    }
    virtual void show()
    {
        cout<<"Show Base"<<endl;
    }
};

class Derived: public Base
{
    public:
    void display()
    {
        cout<<"Display Derived"<<endl;
    }
    void show()
    {
        cout<<"Show Derived"<<endl;
    }

};

int main()
{
    Base B;
    Derived D;
    Base *bptr;
    bptr=&B;
    cout<<"bptr points to base class"<<endl;
    bptr->display();
    bptr->show();
    bptr=&D;
    cout<<"bptr points to derived class"<<endl;
    bptr->display();
    bptr->show();
}