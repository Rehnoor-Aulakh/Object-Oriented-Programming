// Q2. a. Implement the class JoyString as described below. Ensure that your code is well-structured and includes comments to explain your logic.

// i. Joystring: A method that replaces the first occurrence of one character with another in a character array if its length is even; otherwise, print a message indicating that modification is not allowed.

// ii. Joystring: A method that counts the number of spaces in a character array and prints the index of the first space if there are multiple; if only one space is found, specify that; if none, print an appropriate message.


#include<iostream>
#include<string.h>
using namespace std;

class JoyString
{
    public:
    char *string;
    JoyString(char *arr)
    {
        string=arr;
    }
    void replace(char oldChar, char newChar)
    {
        int size=strlen(string);
        if(size%2!=0)
        {
            cout<<"Modification Not Allowed"<<endl;
            return;
        }
        for(int i=0;i<size;i++)
        {
            if(string[i]==oldChar)
            {
                string[i]=newChar;
                cout<<"Character Replaced Successfully!!!"<<endl;
                return;
            }
        }
        cout<<"Character Not Found";
    }
    void space()
    {
        int count=0;
        bool flag=false;
        for(int i=0;i<strlen(string);i++)
        {
            if(string[i]==' ')
            {
                count++;
            }
            if(count==1 && !flag)
            {
                cout<<"Index of First Space: "<<i<<endl;
                flag=true;
            }
        }
        if(count==0)
        {
            cout<<"No Space Found"<<endl;
        }
        else if(count==1)
        {
            cout<<"Only 1 Space found"<<endl;
        }
        else
        {
            cout<<"Number of Spaces found are "<<count<<endl;
        }
    }
};

int main()
{
    char arr[]="hello world abcd";
    JoyString j(arr);
    j.space();
    j.replace('a','x');
    j.replace('b','y');
    j.replace('c','z');
    cout<<j.string;
}
