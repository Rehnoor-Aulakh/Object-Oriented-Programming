#include<iostream>
#include<string>
using namespace std;

class Config
{
    static string default_lang;
    //This default language is common to all the class, so it is static
    string lang;
    static int id;
    //ID is common to all the classes, so it is static
    public:
    Config()
    {
        //default Constructor, so set the language to default
        lang=default_lang;
        ++id;
        cout<<"As there is no input for language, we set default for you"<<endl;

    }
    Config(string lang)
    {
        //Parameterized Constructor
        this->lang=lang;
        ++id;
        cout<<"Your selected option is "<<lang<<endl;
    }
    Config(Config &c)
    {
        lang=c.lang;
        cout<<"The default language for you is "<<lang<<endl;
    }
    static void display()
    {
        cout<<"Number of players joined the game are "<<id<<endl;
    }
};

string Config::default_lang="Hindi";
int Config::id=0;

int main()
{
    Config c;
    Config cc("Punjabi");
    Config cc2(cc);
    c.display();
}