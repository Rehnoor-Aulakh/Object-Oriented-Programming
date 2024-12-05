#include<iostream>
using namespace std;

class X
{
    int a;
    int b;
    public:
    X(int a, int b)
    {
        cout<<"Constructor called"<<endl;
        this->a=a;
        this->b=b;
    }

    void operator()(int a, int b)
    {
        cout<<"Function call operator() overloaded"<<endl;
        this->a=a;
        this->b=b;
    }
    void display()
    {
        cout<<"a: "<<a<<endl;
        cout<<"b: "<<b<<endl;
    }
};

int main()
{
    X x(10,20);
    x.display();
    x(20,30);
    x.display();

}