#include<iostream>
using namespace std;

class space
{
    int x;
    int y;
    int z;
    public:
    void getdata(int a, int b,int c);
    void display();
    // void operator-();
    friend void operator-(space &s);
};

void space::getdata(int a,int b, int c)
{
    x=a;
    y=b;
    z=c;
}

void space::display()
{
    cout<<"x: "<<x<<endl;
    cout<<"y: "<<y<<endl;
    cout<<"z: "<<z<<endl;
}

// void space:: operator-()
// {
//     x=-x;
//     y=-y;
//     z=-z;
// }

void operator-(space &s)
{
    s.x=-s.x;
    s.y=-s.y;
    s.z=-s.z;
}

int main()
{
    space S;
    S.getdata(10,-20,15);
    cout<<"S"<<endl;
    S.display();
    -S;
    cout<<"-S"<<endl;
    S.display();
}
