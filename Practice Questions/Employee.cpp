#include<iostream>
using namespace std;

class Employee
{
    static int totalEmployees;
    const int EmployeeID;
    public:
    Employee(int id):EmployeeID(id)
    {
        totalEmployees++;
    }
    static int getEmployees()
    {
        return totalEmployees;
    }
    friend void display(Employee &e);
};

int Employee::totalEmployees=0;

void display(Employee &e)
{
    cout<<"Employee ID: "<<e.EmployeeID<<endl;
    cout<<"Total Employees: "<<e.totalEmployees<<endl;
}

int main()
{
    Employee e(20);
    display(e);
    Employee e1(10);
    display(e1);
    cout<<"Total Employees are "<<Employee::getEmployees()<<endl;
}