#include<iostream>
using namespace std;

class arr
{
    int a[5];
    public:
    arr(int *s)
    {
        for(int i=0;i<5;i++)
        {
            a[i]=s[i];
        }
    }
    int operator[](int k)
    {
        //return the element at the kth position
        return (a[k]);
    }
};

int main()
{
    int X[5]={1,2,3,4,5};
    arr A=X;
    for(int i=0;i<5;i++)
    {
        cout<<A[i]<<endl;
    }
}