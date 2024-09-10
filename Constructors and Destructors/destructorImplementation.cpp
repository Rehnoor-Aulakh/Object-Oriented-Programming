#include<iostream>
using namespace std;

int Count=0;

class test
{
    public:
    test()
    {
        Count++;
        cout<<"Constructor Msg: Object Number "<<Count<<" created"<<endl;
    }
    ~test()
    {
        cout<<"Object Number "<<Count<<" destroyed"<<endl;
        Count--;
    }
};

int main()
{
    cout<<"Inside Main block"<<endl;
    cout<<"Creating first object t1"<<endl;
    test t1;

    {
        cout<<"Inside block 1"<<endl;
        cout<<"Creating two more objects t2 and t3"<<endl;
        test t2,t3;
    }
}