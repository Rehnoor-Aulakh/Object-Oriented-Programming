#include<iostream>
using namespace std;

template<class T>
class num
{
	T number;
	public:
	void input()
	{
		cout<<"Enter a number: ";
		cin>>number;
		cout<<endl;
	}
	void show()
	{
		cout<<"value of number is "<<number<<endl;
	}
    num operator+(const num &n1)
    {
        num<T>temp;
        temp.number=number+n1.number;
        return temp;
    }
};

int main()
{
    num<int> n1,n2,n3;
    n1.input();
    n2.input();
    n3=n1+n2;
    n3.show();

    cout<<"Now inputing float values "<<endl;
    num<float> n4,n5,n6;
    n4.input();
    n5.input();
    n6=n4+n5;
    n6.show();
}
