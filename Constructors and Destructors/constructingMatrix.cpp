#include<iostream>
using namespace std;

class Matrix
{
    int **p;
    int d1,d2;
    public:
    Matrix(int x, int y);
    void get_element(int i, int j, int value)
    {
        p[i][j]=value;
    }
    int& put_element(int i, int j)
    {
        return p[i][j];
    }
    ~Matrix()
    {
        for(int i=0;i<d1;i++)
        {
            delete p[i];
        }
        delete p;
    }
};

Matrix::Matrix(int x, int y)
{
    d1=x;
    d2=y;
    p=new int *[d1];        //creates an array of integer pointers
    for(int i=0;i<d1;i++)
    {
        p[i]=new int[d2];   //allocates memory for each row
    }
}

int main()
{
    int m,n;

    cout<<"Enter the size of matrix: ";
    cin>>m>>n;
    Matrix A(m,n);
    cout<<"Enter Matrix Elements row by row\n";
    int i,j,value;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>value;
            A.get_element(i,j,value);
        }
        cout<<endl;
    }
    cout<<A.put_element(1,2);
}
