#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Player
{
    string name;
    int score;
    public:
    void set_player(string name, int score)
    {
        this->name=name;
        this->score=score;
    }
    void display()
    {
        cout<<"--------------------------------------"<<endl;
        cout<<setw(15)<<"Player Name"<<setw(20)<<name<<endl;
        cout<<setw(15)<<"Player Score"<<setw(20)<<score<<endl;
        cout<<"--------------------------------------"<<endl;
    }
    int get_score()
    {
        return score;
    }
};

class Team
{
    private:
    Player players[3];
    int sum;
    public:
    Team()
    {
        sum=0;
    }
    void set_player()
    {
        for(int i=0;i<3;i++)
        {
            string name;
            int score;
            cout<<"Enter "<<i+1<<" player name: "<<endl;
            cin>>name;
            cout<<"Enter "<<i+1<<" player score: "<<endl;
            cin>>score;
            players[i].set_player(name,score);
        }
        cout<<"Team Added Successfully"<<endl;
    }
    void display()
    {
        for(int i=0;i<3;i++)
        {
            players[i].display();
        }
    }
    void score()
    {
        for(int i=0;i<3;i++)
        {
            sum+=players[i].get_score();
        }
        cout<<"Team Score is "<<sum<<endl;
    }
    friend void comp_score(Team t1, Team t2);
};

void comp_score(Team t1, Team t2)
{
    if(t1.sum>t2.sum)
    {
        cout<<"Team t1 wins by "<<t1.sum-t2.sum<<" points"<<endl;
    }
    else
    {
        cout<<"Team t2 wins by "<<t2.sum-t1.sum<<" points"<<endl;
    }
}

int main()
{
    Team t1;
    t1.set_player();
    t1.display();
    t1.score();
    Team t2;
    t2.set_player();
    t2.display();
    t2.score();
    comp_score(t1,t2);
}