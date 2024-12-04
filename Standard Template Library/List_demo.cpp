#include<iostream>
#include<list>
#include<cstdlib>
using namespace std;

void display(list<int> &lst)
{
    cout<<endl;
    list<int>::iterator p;
    for(p=lst.begin();p!=lst.end();++p)
    {
        cout<<(*p)<<" , ";
    }
    cout<<endl<<endl;
}

int main()
{
    list<int> list1;
    list<int> list2(5);
    for(int i=0;i<3;i++)
    {
        list1.push_back(i+1);
    }
    list<int>::iterator p;
    for(p=list2.begin();p!=list2.end();++p)
    {
        *p=(rand()/100);
    }
    cout<<"List1"<<endl;
    display(list1);
    cout<<"List2"<<endl;
    display(list2);

    //Add two elements at the end of the list1
    list1.push_back(100);
    list1.push_back(200);

    //Remove an element from the front of list2
    list2.pop_front();
    cout<<"List1"<<endl;
    display(list1);
    cout<<"List2"<<endl;
    display(list2);

    list<int> listA,listB;
    listA=list1;
    listB=list2;
    list1.merge(list2);
    cout<<"Merged unsorted list1 and list2"<<endl;
    display(list1);

    //sorting and merging
    listA.sort();
    listB.sort();
    cout<<"sorted list1: ";
    display(listA);
    cout<<"sorted list2: ";
    display(listB);
    //merging sorted list
    listA.merge(listB);
    display(listA);
}