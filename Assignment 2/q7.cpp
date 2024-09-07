#include<iostream>
#include<string>
using namespace std;

class Employee;  // Forward declaration of Employee class

class Manager 
{
    private:
        int id;
        string name;
        float salary;

    public:
        // Friend function declaration to access private members
        friend float sum(const Manager&, const Employee&);

        // Parameterized constructor
        Manager(int id, string name, float salary) 
        {
            this->id = id;
            this->name = name;
            this->salary = salary;
        }

        // Function to display manager details
        void display() 
        {
            cout << "Manager ID: " << id << endl;
            cout << "Manager Name: " << name << endl;
            cout << "Manager Salary: " << salary << endl;
        }
};

class Employee 
{
    private:
        int id;
        string name;
        float salary;

    public:
        // Friend function declaration to access private members
        friend float sum(const Manager&, const Employee&);

        // Parameterized constructor
        Employee(int id, string name, float salary) {
            this->id = id;
            this->name = name;
            this->salary = salary;
        }

        // Function to display employee details
        void display() 
        {
            cout << "Employee ID: " << id << endl;
            cout << "Employee Name: " << name << endl;
            cout << "Employee Salary: " << salary << endl;
        }
};

// Friend function to sum the salaries of a Manager and an Employee
float sum(const Manager &m, const Employee &e) 
{
    return m.salary + e.salary;
}

int main() {
    // Creating Manager and Employee objects
    Manager m1(101, "ABC", 50000);
    Employee e1(201, "PQR", 30000);

    // Display their details
    cout << "Manager Details:" << endl;
    m1.display();

    cout << "\nEmployee Details:" << endl;
    e1.display();

    // Calculate and display the total salary
    cout << "\nTotal Salary (Manager + Employee): " << sum(m1, e1) << endl;

    return 0;
}
