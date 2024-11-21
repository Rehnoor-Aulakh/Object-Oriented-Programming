#include<iostream>
using namespace std;

template<typename T>
void Swap(T &x, T &y)
{
    T t;
    t=x;
    x=y;
    y=t;
}

void fun(int m, int n, float a, float b)
{
    cout<<"m and n before swap: "<<m<<" "<<n<<endl;
    Swap(m,n);
    cout<<"m and n after swap: "<<m<<" "<<n<<endl;
    cout<<"a and b before swap: "<<a<<" "<<b<<endl;
    Swap(a,b);
    cout<<"a and b after swap: "<<a<<" "<<b<<endl;

}

int main()
{
    fun(10,20,10.5,20.4);
}