#include<iostream>
using namespace std;

class Invent2;

class Invent1
{
    int code;
    int items;
    float price;
    public:
    Invent1(int a,int b, float c)
    {
        code=a;
        items=b;
        price=c;
    }
    void putdata()
    {
        cout<<"Code: "<<code<<endl;
        cout<<"Items: "<<items<<endl;
        cout<<"Value: "<<price<<endl;
    }
    int getcode()
    {
        return code;
    }
    int getitems()
    {
        return items;
    }
    float getprice()
    {
        return price;
    }
    operator float()
    {
        return (items*price);
    }
    
    //Invent1 to Invent2 using operator casting
    // operator Invent2()   
    // {
    //     Invent2 temp;
    //     temp.code=code;
    //     temp.value=items*price;
    //     return temp;
    // }
};

class Invent2
{
    int code;
    float value;
    public:
    Invent2()
    {
        code=0;
        value=0;
    }
    Invent2(int x, float y)
    {
        code=x;
        value=y;
    }
    void putdata()
    {
        cout<<"Code: "<<code<<endl;
        cout<<"Value: "<<value<<endl;
    }
    Invent2(Invent1 p)
    {
        code=p.getcode();
        value=p.getitems()*p.getprice();
    }
};

int main()
{
    Invent1 i1(100,5,140);
    Invent2 i2;
    float total_value;
    total_value=i1;
    i2=i1;
    cout<<"Invent1 Details: "<<endl;
    i1.putdata();
    cout<<"Total Value: "<<total_value<<endl;
    cout<<"Invent2 Details: "<<endl;
    i2.putdata();
}
