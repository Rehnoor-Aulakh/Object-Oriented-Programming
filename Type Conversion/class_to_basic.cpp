#include<iostream>
using namespace std;

class Vector
{
    int *v;
    int size;
    public:
    Vector(int size)
    {
        this->size=size;
        v=new int[size];
        for(int i=0;i<size;i++)
        {
            v[i]=0;
        }
    }
    Vector(int *x, int size)
    {
        this->size=size;
        for(int i=0;i<size;i++)
        {
            v[i]=x[i];
        }
    }
    operator double()
    {
        double sum=0;
        for(int i=0;i<size;i++)
        {
            sum=sum+v[i]*v[i];
        }
        return sqrt(sum);
    }
};

int main()
{
    int arr[]={6,8};
    Vector v1(arr,2);
    double magnitude=v1;
    cout<<magnitude<<endl;
}