#include<iostream>
using namespace std;

class Rectangle
{
    int length;
    int breadth;

    public:
    Rectangle(int l=0, int b=0)
    {
        if(b==0)
        {
            //Means length is provided and breadth is 0 by default, set both to l, make it square
            length=l;
            breadth=l;
        }
        else
        {
            //b is non zero, assign the specific values
            length=l;
            breadth=b;
        }
    }
    int area()
    {
        return length*breadth;
    }
    ~Rectangle()
    {
        cout<<"Rectangle with length "<<length<<" and breadth "<<breadth<<" is destroyed"<<endl;
    }
};

int main()
{
    //Creating Array of objects of Rectangle class
    Rectangle r[3]={
        Rectangle(),    //no parameter, default(0,0)
        Rectangle(7),
        Rectangle(6,8),
    };
    //Calculate area of each object
    for(int i=0;i<3;i++)
    {
        cout<<"Area of Rectangle "<<i<<" is "<<r[i].area()<<endl;
    }
}