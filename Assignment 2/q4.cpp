#include<iostream>
#include<string.h>
using namespace std;

class Book
{
    public:
    char *title;
    char *author;
    int ISBN;

};

class Library
{
    private:
    Book b[100];
    //Array of objects of Book class of size 100 means the capacity of library is 100 books
    int i;
    //This is an indicator which points to the current position of book in library where we can add new books
    public:
    Library()
    {
        i=0;
    }
    bool addNewBook(const char* title, const char* author, int ISBN)
    {
        if(i<100)
        {
            //Add the new book at the i position of the objects array
            b[i].title=new char[strlen(title)+1];
            //Copy Title
            strcpy(b[i].title,title);
            b[i].author=new char[strlen(author)+1];
            //Copy Author
            strcpy(b[i].author,author);
            b[i].ISBN=ISBN;
            i++;
            return true;
        }
        else
        {
            return false;
        }

    }
    bool removeBook(int ISBN)
    {
        for(int j=0;j<i;j++)
        {
            if(b[j].ISBN==ISBN)
            {
                for(int k=j;k<i-1;k++)
                {
                    b[k]=b[k+1];
                }
                i--;
                return true;
            }
        }
        return false;
    }
    void displayDetails()
    {
        cout<<"---------------------Book Details------------------------"<<endl;
        for(int j=0;j<i;j++)
        {
            cout<<"Title: "<<b[j].title<<endl;
            cout<<"Author: "<<b[j].author<<endl;
            cout<<"ISBN: "<<b[j].ISBN<<endl;
        }
        cout<<"---------------------------------------------------------"<<endl;
    }
};

int main()
{
    Library l;
    while(1)
    {
        cout<<"Press 1 to Add New Book"<<endl;
        cout<<"Press 2 to Remove a Book"<<endl;
        cout<<"Press 3 to Display Details"<<endl;
        cout<<"Press 4 to Exit"<<endl;
        int choice;
        cout<<"Enter your choice: ";
        cin>>choice;
        cout<<endl;
        switch(choice)
        {
            case 1:
            {
                char title[100];
                cout<<"Enter Title: ";
                cin.ignore();
                cin.getline(title,100);
                cout<<endl;
                char author[100];
                cout<<"Enter Author: ";
                cin.getline(author,100);
                cout<<endl;
                int ISBN;
                cout<<"Enter ISBN: ";
                cin>>ISBN;
                cout<<endl;
                if(l.addNewBook(title,author,ISBN))
                {
                    cout<<"Book Added Successfully!!!"<<endl;
                }
                else
                {
                    cout<<"Failed to Add Book!!!"<<endl;
                }
                break;
            }
            case 2:
            {
                cout<<"Enter the ISBN of Book you want to Remove: ";
                int ISBN;
                cin>>ISBN;
                if(l.removeBook(ISBN))
                {
                    cout<<"Book Removed Successfully!!!"<<endl;
                }
                else
                {
                    cout<<"Failed to Remove Book"<<endl;
                }
                break;
            }
            case 3:
            {
                l.displayDetails();
                break;
            }
            default:
            {
                return 0;
            }
        }
    }
}