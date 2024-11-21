#include<iostream>
using namespace std;

#define size 5

template<typename T>
T find_min(T arr[])
{
    int i=0;
    T min=arr[0];
    for(i=0;i<size;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
}

int main()
{
    int I_MIN;
    float F_MIN;
    char C_MIN;

    int I[5]={20,4,2,38,97};
    float F[5]={-9.9,12.2,3.1,9.9,8.9};
    char C[5]={'a','A','/','4','~'};

    I_MIN=find_min(I);
    F_MIN=find_min(F);
    C_MIN=find_min(C);
    cout<<"Minimum value in integer array is: "<<I_MIN<<endl;
    cout<<"Minimum value in float array is: "<<F_MIN<<endl;
    cout<<"Minimum value in character array is: "<<C_MIN<<endl;
}