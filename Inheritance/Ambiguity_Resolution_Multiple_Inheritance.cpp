#include<iostream>
using namespace std;

class M
{
    public:
    void display()
    {
        cout<<"Class M"<<endl;
    }
};

class N
{
    public:
    void display()
    {
        cout<<"Class N"<<endl;
    }
};

class P: public M, public N
{
    public:
    void display()
    {
        M::display();   //This will override the display() of M and N
    }
};

int main()
{
    P p;
    p.display();
    //If you want to call display() of N class
    p.N::display();     
}