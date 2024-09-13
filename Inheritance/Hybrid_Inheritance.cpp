#include<iostream>
using namespace std;

class student
{
    protected:
    int rollno;
    public:
    void get_rollno(int x)
    {
        rollno=x;
    }
    void put_rollno()
    {
        cout<<"Rollno: "<<rollno<<endl;
    }
};

class test:public student
{
    protected:
    float mst,est;
    public:
    void get_marks(float a,float b)
    {
        mst=a;
        est=b;
    }
    void put_marks()
    {
        cout<<"MST Marks: "<<mst<<endl;
        cout<<"EST Marks: "<<est<<endl;
    }
};

class sports
{
    protected:
    float score;
    public:
    void get_score(float x)
    {
        score=x;
    }
    void put_score()
    {
        cout<<"Score: "<<score<<endl;
    }
};

class result:public test,public sports
{
    protected:
    float total;
    public:
    void display()
    {
        total=mst+est+score;
        put_rollno();
        put_marks();
        put_score();
        cout<<"Total Marks: "<<total<<endl;
    }
};

int main()
{
    result r1;
    r1.get_rollno(101);
    r1.get_marks(57.5,68.3);
    r1.get_score(45);
    r1.display();
}