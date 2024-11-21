#include<iostream>
using namespace std;

template<class T1,class T2>
class Pair
{
    T1 a;
    T2 b;
    public:
    Pair(T1 x, T2 y)
    {
        a=x;
        b=y;
    }
    void show()
    {
        cout<<a<<" and "<<b<<endl;
    }
};

int main()
{
    cout<<"Instantiating the class template as pair1 with float and int data types "<<endl;
    cout<<"pair1: ";
    Pair<float,int> pair1(1.23,123);
    pair1.show();
}