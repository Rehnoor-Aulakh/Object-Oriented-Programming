#include<iostream>
using namespace std;

class num
{
    int n;
    public:
    num(int n)
    {
        this->n=n;
    }
    num& operator++()
    {
        cout<<"Prefix ++"<<endl;
        //prefix operator because there is no argument, behaves as unary operator
        n++;
        return *this;
    }
    num operator++(int)
    {
        cout<<"Postfix ++"<<endl;
        //save the current state
        num temp(n);
        n++;
        return temp;
    }
    void display()
    {
        cout<<n<<endl;
    }
};

int main()
{
    num n1(10);
    n1.display();
    ++n1;
    n1.display();
    n1++.display();
    //what this does is n1++ returns the temp object and the display function will display the temp i.e 11, and n1 will get incremented
    n1.display();

}
