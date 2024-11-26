#include<iostream>
using namespace std;

class Time
{
    int hours;
    int minutes;
    public:
    Time(){}
    Time& operator=(int t)
    {
        cout<<"Operator overloaded"<<endl;
        hours=t/60;
        minutes=t%60;
        return *this;
    }
    void show()
    {
        cout<<"Hours: "<<hours<<endl;
        cout<<"Minutes: "<<minutes<<endl;
    }
};

int main()
{
    Time t1;
    t1=85;
    t1.show();
}