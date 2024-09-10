#include<iostream>
using namespace std;

class Code
{
    int id;
    public:
    Code(){}        //Default Constructor
    Code(int id)    //Parameterized Constructor
    {
        this->id=id;
    }
    Code(Code& c)   //Copy Constructor
    {
        id=c.id;
    }
    void show()
    {
        cout<<"ID: "<<id<<endl;
    }
};

int main()
{
    Code c1(100);   //Calling Parameterized Constructor
    Code c2(c1);    //Calling Copy Constructor
    Code c3=c1;     //This line also triggers the copy constructor Code(Code &c), though it uses the "assignment-like" syntax.
    Code c4;        //This creates an object c4 using the default constructor first (Code()) and then uses the assignment operator (=) to copy the state of c1 into c4
    c4=c1;
    c1.show();
    c2.show();
    c3.show();
    c4.show();
}