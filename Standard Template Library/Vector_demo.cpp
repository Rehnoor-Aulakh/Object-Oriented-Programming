#include<iostream>
#include<vector>
using namespace std;

//creating a templatized function to display the vector
template<class T>
void display(vector<T> &v)
{
    cout<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int> v;
    cout<<"Initial Size: "<<v.size()<<endl;
    int x;
    for(int i=0;i<5;i++)
    {
        cout<<"Enter value: ";
        cin>>x;cout<<endl;
        v.push_back(x);
    }
    cout<<"Size after reading 5 values: "<<v.size()<<endl;
    cout<<"Displaying elements"<<endl;
    display(v);
    v.push_back(6.6);
    cout<<"Size is "<<v.size()<<endl;
    display(v);

    //Using Iterators
    //Inserting Elements
    vector<int>::iterator itr=v.begin();
    itr=itr+3;  //points to the 4th element
    v.insert(itr,9);
    display(v);

    v.erase(v.begin()+3,v.begin()+5);
    display(v);
}
