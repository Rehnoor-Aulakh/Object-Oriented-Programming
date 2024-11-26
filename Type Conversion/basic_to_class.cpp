#include<iostream>
using namespace std;

class Time
{
    int hours;
    int minutes;
    public:
    Time(){}
    Time(int t)
    {
        hours=t/60;
        minutes=t%60;
    }
    void show()
    {
        cout<<"Hours: "<<hours<<endl;
        cout<<"Minutes: "<<minutes<<endl;
    }
};

int main()
{
    int duration=85;
    Time t1;
    t1=duration;
    t1.show();
}