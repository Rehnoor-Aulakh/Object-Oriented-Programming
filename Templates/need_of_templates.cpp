#include<iostream>
using namespace std;

class Vector
{
    //data type here is fixed to int
    int *v;
    int size;
    public:
    Vector(int m)
    {
        v=new int[size=m];
        for(int i=0;i<size;i++)
        {
            v[i]=0;
        }
    }
    Vector(int *a)
    {
        //given an array of integer a, copy all the elements of int array to Vector 
        for(int i=0;i<size;i++)
        {
            v[i]=a[i];
        }
    }
    void operator=(int a[])
    {
        for(int i=0;i<size;i++)
        {
            v[i]=a[i];
        }
    }
    int operator*(const Vector &y)
    {
        int sum=0;
        for(int i=0;i<size;i++)
        {
            sum+=this->v[i]*y.v[i];
        }
        return sum;
    }
};

int main()
{
    int x[3]={1,2,3};
    int y[3]={4,5,6};
    Vector v1(3);
    Vector v2(3);
    v1=x;
    v2=y;
    int R=v1*v2;
    cout<<"R= "<<R<<endl;
}

//for templates, we will have a class with the data type as a parameter