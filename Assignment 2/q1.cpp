#include<iostream>
using namespace std;

class cube
{
    private:
    int side;
    public:
    void accept()
    {
        cout<<"Enter Side: ";
        cin>>side;
        cout<<endl;
    }
    int calc()
    {
        return side*side*side;
    }
};


int main()
{
    cube c1;
    c1.accept();
    cout<<"Cube is "<<c1.calc()<<endl;
}