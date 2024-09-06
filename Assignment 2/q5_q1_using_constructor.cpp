#include<iostream>
using namespace std;

class cube
{
    private:
    int side;
    public:
    cube(int side)
    {
        this->side=side;
    }
    int calc()
    {
        return side*side*side;
    }
};

int main()
{
    int side;
    cout<<"Enter side: ";
    cin>>side;
    cout<<endl;
    cube c1(side);
    cout<<"Cube of "<<side<<" is "<<c1.calc()<<endl;

}