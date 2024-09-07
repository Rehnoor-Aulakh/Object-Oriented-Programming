#include<iostream>
using namespace std;

class Complex
{
    private:
    int real;
    int imag;
    public:
    //Parameterized Constructor
    Complex(int real, int imag)
    {
        this->real=real;
        this->imag=imag;
    }
    //Copy Constructor
    Complex(const Complex &c)
    {
        real=c.real;
        imag=c.imag;
    }
    void display()
    {
        cout <<real<<" + "<<imag<< "i"<<endl;
    }
    friend void sum(const Complex& c1, const Complex& c2);
};

void sum(const Complex& c1, const Complex& c2)
{
    cout<<c1.real+c2.real<<" + "<< c1.imag+c2.imag<<"i";
}

int main()
{
    Complex c1(14,27);
    Complex c2=c1;
    cout<<"c1: "<<endl;
    c1.display();
    cout<<"c2: "<<endl;
    c2.display();
    cout<<"Sum of c1 and c2 is ";
    sum(c1,c2);
    cout<<endl;

}