#include<iostream>
using namespace std;

template<typename T>
void Swap(T &x, T &y)
{
    T t=x;
    x=y;
    y=t;
}

template<typename T>
void bubble(T a[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                //Swap
                Swap(a[j],a[j+1]);
            }
        }
    }
}

int main()
{
    float a[]={10.2,2.12,21.213,23.123,12.434,22.32,33,14};
    int size=sizeof(a)/sizeof(int);
    bubble(a,size);
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
