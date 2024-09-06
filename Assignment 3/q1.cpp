#include<iostream>
#include<string.h>
using namespace std;

class Student
{
    private:
    int rollno;
    char *name;
    float marks;
    public:
    Student()
    {

    }
    Student(int rollno, char* name, float marks)
    {
        //Using this pointer
        this->rollno=rollno;
        this->name=name;
        this->marks=marks;
    }
    void display()
    {
        cout<<"Rollno: "<<rollno;
        cout<<"Name: "<<name;
        cout<<"Marks: "<<marks;
    }
};

int main()
{
    Student s1(100,"Rehnoor Aulakh",97);
    s1.display();
    //dot operator
    Student *s2=new Student(101,"ABC",95);
    s2->display();
    //Arrow operator

}