#include<iostream>
using namespace std;

int x=100;
//Global variable

class A
{
    
    public:
    static int x;
    void display()
    {
        cout<<"The value of static x is "<<x<<endl;
    }
};

int A::x=200;

int main()
{
    int x=50;
    //Print the value of local x
    cout<<x<<endl;
    //Print the value of global x
    cout<<::x<<endl;
    //Print the value of static x
    A a;    //object of A class
    //Printing static variable through member function of A class
    a.display();
    //Printing static variable through object
    cout<<a.x<<" is the value of static variable"<<endl;
    //Printing static variable by scope resolution operator
    cout<<A::x<<" is the value of static variable"<<endl;

}