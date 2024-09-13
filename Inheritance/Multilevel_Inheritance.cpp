#include<iostream>
using namespace std;

class student
{
    protected:
    int rollno;
    public:
    void get_rollno(int a)
    {
        rollno=a;
    }
    void put_rollno()
    {
        cout<<"Roll Number: "<<rollno<<endl;
    }
};

class test:public student
{
    protected:
    float sub1,sub2;
    public:
    void get_marks(float a, float b)
    {
        sub1=a;
        sub2=b;
    }
    void put_marks()
    {
        cout<<"Subject 1 Marks: "<<sub1<<endl;
        cout<<"Subject 2 Marks: "<<sub2<<endl;
    }
};

class result:public test
{
    float total;
    public:
    void display()
    {
        total=sub1+sub2;
        put_rollno();
        put_marks();
        cout<<"Total Marks: "<<total<<endl;
    }

};

int main()
{
    result r1;
    r1.get_rollno(101);
    r1.get_marks(57.5,67.3);
    r1.display();
}