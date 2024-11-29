#include<iostream>
using namespace std;

class complex
{
    float x;
    float y;
    public:
    complex(){} //default constructor
    complex(float real, float imag)
    {
        x=real;
        y=imag;
    }
    complex operator+(complex);
    void display();
};

complex complex::operator+(complex c)
{
    complex temp;
    temp.x=x+c.x;
    temp.y=y+c.y;
    return temp;
    //Alternatively
    // return complex((x+c.x),(y+c.y));
}
void complex::display()
{
    cout<<x<<" + i"<<y<<endl;
}

int main()
{
    complex c1,c2,c3;
    c1=complex(2.5,3.5);
    c2=complex(1.6,2.7);
    c3=c1+c2;
    cout<<"C1 = ";
    c1.display();
    cout<<endl;
    cout<<"C2 = ";
    c2.display();
    cout<<endl;
    cout<<"C3 = ";
    c3.display();
    cout<<endl;
}