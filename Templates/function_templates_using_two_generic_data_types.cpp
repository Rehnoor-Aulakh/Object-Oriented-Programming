#include<iostream>
using namespace std;

template<typename T1, typename T2>
void display(T1 x, T2 y)
{
    cout<<x<<" "<<y<<endl;
}

int main()
{
    cout<<"Calling display function with int and char parameters"<<endl;
    int a=10;
    char b='a';
    display(a,b);
    cout<<"Calling display function with float and int parameters"<<endl;
    int c=20;
    float d=30.45;
    display(d,c);
}