#include<iostream>
using namespace std;

class Complex
{
    private:
    int real;
    int imag;
    friend Complex sum(Complex,Complex);
    public:
    void set()
    {
        cout<<"Enter the real part: ";
        cin>>real;
        cout<<endl<<"Enter the imaginary part: ";
        cin>>imag;
        cout<<endl;
    }
    void display()
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
        cout<<"Real Part:      "<<real<<endl;
        cout<<"Imaginary Part: "<<imag<<endl;
    }
    void sum(Complex c1)
    {
        real+=c1.real;
        imag=c1.imag;
    }

};
Complex sum(Complex c1,Complex c2)
{
    Complex c3;
    c3.real=c1.real+c2.real;
    c3.imag=c1.imag+c2.imag;
    return c3;
}

int main()
{
    cout<<"Creating first complex number"<<endl;
    Complex c1;
    c1.set();
    c1.display();
    cout<<"Creating second complex number"<<endl;
    Complex c2;
    c2.set();
    c2.display();

    cout<<"Calling the sum function"<<endl;
    Complex c3=sum(c1,c2);
    c3.display();
}