#include<iostream>
#include<string.h>
using namespace std;

class String
{
    char *p;
    int len;
    public:
    String()
    {
        len=0;
        p=0;
    }
    String(const char *s)
    {
        len=strlen(s);
        p=new char[len+1];
        strcpy(p,s);
    }
    String(const String &s)
    {
        len=s.len;
        p=new char[len+1];
        strcpy(p,s.p);
    }
    String friend operator+(String s,String t);
    int friend operator<=(const String &s, const String &t);
    void display()
    {
        cout<<p<<endl;
    }
};

int operator<=(const String &s, const String &t)
{
    return (s.len<=t.len);
}

String operator+(String s, String t)
{
    String temp;
    temp.len=s.len+t.len;
    temp.p=new char[temp.len+1];
    strcpy(temp.p,s.p);
    strcat(temp.p,t.p);
    return temp;
}

int main()
{
    char *s="afskfdhaksfsa";
    char *t="asdfkasfdk";
    String a=t;
    String b=s;
    String c=a+b;
    c.display();
    int d=a<=b;
    cout<<d<<endl;
}
