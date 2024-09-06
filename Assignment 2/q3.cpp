#include<iostream>
using namespace std;

class A
{
    public:
    static int x;
    static void increment();
};

int A::x=9;
//defining the static function
void increment()
{
    //static function can access only the static variables.
    A::x++;
}

int main()
{
    cout<<A::x<<endl;
    increment();
    cout<<A::x<<endl;
    increment();
    cout<<A::x<<endl;
}