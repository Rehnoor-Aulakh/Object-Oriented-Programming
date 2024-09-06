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
    Student(int rollno, const char* name, float marks)
    {
        //Using this pointer
        this->rollno=rollno;
        //Perform deep copying of name
        this->name = new char[strlen(name) + 1]; // +1 for null terminator
        strcpy(this->name, name);
        this->marks=marks;
    }
    void display()
    {
        cout<<"Rollno: "<<rollno<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};

int main()
{
    const char *name="PQR";
    Student s1(100,name,97);
    s1.display();
    //dot operator
    const char *name2="ABC";
    Student *s2=new Student(101,name2,95);
    s2->display();
    //Arrow operator

}