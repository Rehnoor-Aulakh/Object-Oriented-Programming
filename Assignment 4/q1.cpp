#include<iostream>
using namespace std;

class Rectangle
{
    int length;
    int breadth;
    public:
    Rectangle()         // a) Default Constructor
    {
        length=0;
        breadth=0;
    }
    Rectangle(int length, int breadth)      //b) Parameterized Constructor with two parameters
    {
        this->length=length;
        this->breadth=breadth;
    }
    Rectangle(int x)        //c) Parameterized Constructor with one parameter
    {
        length=x;
        breadth=x;
    }
    void area()
    {
        cout<<"Area of Rectangle is "<<length*breadth<<endl;
    }
};

int main()
{
    Rectangle R1;       //It will be initialized by the default constructor
    R1.area();
    Rectangle R2(10);   //It will be initialized by the constructor with one parameter
    R2.area();
    Rectangle R3(8,6);   //It will be initialized by the constructor with two parameters
    R3.area();
}