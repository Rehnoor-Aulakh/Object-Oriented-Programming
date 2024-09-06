#include<iostream>
using namespace std;

class student
{
    private:
    int rollno;
    char name[30];
    char degree[30];
    char hostel[10];
    float cgpa;


    public:
    void addDetails()
    {
        cout<<"Enter Rollno: ";
        cin>>rollno;
        cout<<endl<<"Enter Name: ";
        cin>>name;
        cout<<endl<<"Enter Degree: ";
        cin>>degree;
        cout<<endl<<"Enter Hostel: ";
        cin>>hostel;
        cout<<endl<<"Enter CGPA: ";
        cin>>cgpa;
    }
    void update()
    {
        cout<<endl<<"Press 1 to Update Name";
        cout<<endl<<"Press 2 to Update Degree";
        cout<<endl<<"Press 3 to Update Hostel";
        cout<<endl<<"Enter Choice";
        int choice;
        cin>>choice;
        switch(choice)
        {
            case 1:
            {
                cout<<endl<<"Enter Updated Name: ";
                cin>>name;
                break;
            }
            case 2:
            {
                cout<<endl<<"Enter Updated Degree: ";
                cin>>degree;
                break;
            }
            case 3:
            {
                cout<<endl<<"Enter Updated Hostel: ";
                cin>>hostel;
                break;
            }
            default:
            {
                cout<<endl<<"Please Enter valid choice";
            }
        }
    }
    void display()
    {
        cout<<endl<<"Rollno: "<<rollno;
        cout<<endl<<"Name: "<<name;
        cout<<endl<<"Degree: "<<degree;
        cout<<endl<<"Hostel: "<<hostel;
        cout<<endl<<"CGPA: "<<cgpa;
    }
};

int main()
{
    student s1;
    while(true)
    {
    cout<<endl<<"Press 1 to Add Details";
    cout<<endl<<"Press 2 to Update Details";
    cout<<endl<<"Press 3 to Display Details";
    cout<<endl<<"Press 4 to Exit";
    int choice;
    cout<<endl<<"Enter your choice: ";
    cin>>choice;
    switch(choice)
    {
        case 1:
        {
            s1.addDetails();
            break;
        }
        case 2:
        {
            s1.update();
            break;
        }
        case 3:
        {
            s1.display();
            break;
        }
        default:
        {
            return 0;
        }

    }
    }
}