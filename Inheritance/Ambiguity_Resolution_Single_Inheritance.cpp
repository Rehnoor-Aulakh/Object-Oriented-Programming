#include<iostream>
using namespace std;

class A
{
    public:
    void display()
    {
        cout<<"A"<<endl;
    }
};

class B:public A
{
    public:
    void display()
    {
        cout<<"B"<<endl;
    }
};

int main()
{
    B b;
    b.display();    //B will be displayed, display() of A class is overrided by display() of B
    //If you want to call display() of A class
    b.A::display();     //Invokes display() of A
    b.B::display();     //Invokes display() of B
}