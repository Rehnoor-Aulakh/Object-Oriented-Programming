//Design a C++ program for a simple Library Management System. The system should be able to handle the following functionalities, use appropriate classes and objects accordingly:
// 1) Book Management: Add, remove, search for books
// 2) Library Member Management: Add, remove and search for Library Members
// 3) Borrowing System: Allow members to borrow and return books. Ensure that a book cannot be borrowed if it is already borrowed by another member

#include<iostream>
#include<string>
using namespace std;

int ID=101;
class Book
{
    public:
    int ISBN;
    string name;
    string author;
    bool borrowed;
    Book()
    {
        borrowed=false;
    }
};

class Member
{
    public:
    int id;
    int rollno;
    string name;
};

class Library
{
    private:
    Book *b;
    int b_pos,m_pos;
    Member *m;
    public:
    Library(int books, int members)
    {
        b_pos=0;
        m_pos=0;
        b=new Book[books+1];
        m=new Member[members+1];
        cout<<"Library Created with "<<books<<" books and "<<members<<" members"<<endl;
    }
    void addBook(string name,string author, int ISBN)
    {
        b[b_pos].author=author;
        b[b_pos].name=name;
        b[b_pos].ISBN=ISBN;
        b_pos++;
        cout<<"Book Added Successfully"<<endl;
    }
    void removeBook(int ISBN)
    {
        for(int i=0;i<b_pos;i++)
        {
            if(ISBN==b[i].ISBN)
            {
                //delete this book
                for(int k=i;k<b_pos;k++)
                {
                    b[k]=b[k+1];
                }
                b_pos--;
                cout<<"Book Removed Successfully"<<endl;
                return;
            }
        }
        cout<<"Book Not Found!!!"<<endl;
    }
    void searchBook(int ISBN)
    {
        for(int i=0;i<b_pos;i++)
        {
            if(b[i].ISBN==ISBN)
            {
                if(b[i].borrowed)
                {
                    cout<<"Borrowed"<<endl;
                }
                cout<<"Book Found"<<endl;
                cout<<b[i].name<<endl;
                cout<<b[i].author<<endl;
                return;
            }
        }
        cout<<"Book Not Found"<<endl;
    }
    void printBooks()
    {
        cout<<"----------------Books-------------------"<<endl;
        for(int i=0;i<b_pos;i++)
        {
            if(b[i].borrowed)
            {
                cout<<"Borrowed"<<endl;
            }
            cout<<b[i].name<<endl;
            cout<<b[i].author<<endl;
            cout<<b[i].ISBN<<endl;
            cout<<endl;
        }
        cout<<"---------------------------------------"<<endl;
    }
    void addMember(int rollno, string name)
    {
        m[m_pos].id=ID++;
        m[m_pos].name=name;
        m[m_pos].rollno=rollno;
        m_pos++;
    }
    void removeMember(int rollno)
    {
        for(int i=0;i<m_pos;i++)
        {
            if(rollno==m[i].rollno)
            {
                //delete this member
                for(int k=i;k<m_pos;k++)
                {
                    m[k]=m[k+1];
                }
                m_pos--;
                cout<<"Member Removed Successfully"<<endl;
                return;
            }
        }
        cout<<"Member Not Found!!!"<<endl;
    }
    void searchMember(int rollno)
    {
        for(int i=0;i<m_pos;i++)
        {
            if(m[i].rollno==rollno)
            {
                cout<<"Member Found"<<endl;
                cout<<m[i].name<<endl;
                cout<<m[i].id<<endl;
                return;
            }
        }
        cout<<"Member Not Found"<<endl;
    }
    void printMemebers()
    {
        cout<<"-------------Members-------------------"<<endl;
        for(int i=0;i<m_pos;i++)
        {
            cout<<m[i].id<<endl;
            cout<<m[i].name<<endl;
            cout<<m[i].rollno<<endl;
            cout<<endl;
        }
        cout<<"----------------------------------------"<<endl;
    }
    void borrowBook(int ISBN)
    {
        for(int i=0;i<b_pos;i++)
        {
            if(ISBN==b[i].ISBN && !b[i].borrowed)
            {
                b[i].borrowed=true;
                cout<<"Book borrow successful!!!"<<endl;
                return;
            }
        }
        cout<<"Book Not Available"<<endl;
    }
    void returnBook(int ISBN)
    {
        for(int i=0;i<b_pos;i++)
        {
            if(ISBN==b[i].ISBN && b[i].borrowed)
            {
                b[i].borrowed=false;
                cout<<"Book return successfull!!!"<<endl;
                return;
            }
        }
        cout<<"Book Not Found"<<endl;
    }

};

int main()
{
    Library lib(100,100);
    lib.addBook("Godfather","Mario Puzo",1231);
    lib.addBook("Rich Dad Poor Dad","Robert Kiosaki",1234);
    lib.addBook("Object Oriented Programming","E Balagurusamy",1235);
    lib.addBook("Operating System","Galvin",1236);
    lib.searchBook(1234);
    lib.removeBook(1236);
    lib.addMember(102317137,"Rehnoor Aulakh");
    lib.addMember(102315185,"ABCD");
    lib.addMember(102316166,"XYZ");
    lib.printMemebers();
    lib.searchMember(102317137);
    lib.borrowBook(1231);
    lib.returnBook(1231);
    lib.printBooks();

}
