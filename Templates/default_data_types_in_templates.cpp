#include<iostream>
using namespace std;

template<class T1=int,class T2=int>
class Pair
{
    T1 a;
    T2 b;
    public:
    Pair(T1 x,T2 y)
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
    Pair<float,int> test1(1.23,123);
    Pair<int,char> test2(100,'W');
    //the data types for default templates will be type casted to that type
    Pair<> test3('a',1.23);
    // 'a' to 97 and 1.23 to 1
    test1.show();
    test2.show();
    test3.show();
}