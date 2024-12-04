#include<iostream>
#include<cstring>
using namespace std;

class Media
{
    protected:
    char title[50];
    float price;
    public:
    Media(char *s, float p)
    {
        strcpy(title,s);
        price=p;
    }
    virtual void display(){}
};

class Book:public Media
{
    int pages;
    public:
    Book(char *s, float p, int pages):Media(s,p)
    {
        this->pages=pages;
    }
    void display()
    {
        cout<<endl<<"Title: "<<title;
        cout<<endl<<"Price: "<<price;
        cout<<endl<<"Pages: "<<pages<<endl;
    }
};

class Tape: public Media
{
    float time;
    public:
    Tape(char *s, float p,float time):Media(s,p)
    {
        this->time=time;
    }
    void display()
    {
        cout<<endl<<"Title: "<<title;
        cout<<endl<<"Price: "<<price;
        cout<<endl<<"Time: "<<time<<endl;
    }
};

int main()
{
    Media *list[2];
    char *title;
    float price,time;
    int pages;
    cout<<"Enter book title: "; 
    cin>>title;
    cout<<endl;
    cout<<"Enter Book Price: ";
    cin>>price;
    cout<<endl;
    cout<<"Enter Book pages: ";
    cin>>pages;cout<<endl;
    Book b(title,price,pages);
    cout<<"Enter tape title: ";
    cin>>title;
    cout<<"Enter tape price: ";
    cin>>price;
    cout<<endl<<"Enter tape running time: ";
    cin>>time;cout<<endl;
    Tape t(title,price,time);
    list[0]=&b;
    list[1]=&t;

    list[0]->display();
    list[1]->display();
}
