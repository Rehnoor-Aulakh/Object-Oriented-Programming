#include<iostream>
using namespace std;

class M
{
    protected:
    int m;
    public:
    void get_m(int x)
    {
        m=x;
    }
};

class N
{
    protected:
    int n;
    public:
    void get_n(int y)
    {
        n=y;
    }
};

class P: public M, public N
{
    public:
    void display()
    {
        cout<<"m: "<<m<<endl;
        cout<<"n: "<<n<<endl;
        cout<<"m*n: "<<m*n<<endl;
    }
};

int main()
{
    P p;
    p.get_m(20);
    p.get_n(44);
    p.display();
}