#include <iostream>

using namespace std;

template <typename T>
class Vector 
{
private:
    T* v;
    int size;
public:
    Vector(int size) : size(size) {
        v = new T[size];
        for (int i = 0; i < size; ++i) {
            v[i] = 0;
        }
    }

    Vector(T* a, int size) : size(size) {
        v = new T[size];
        for (int i = 0; i < size; ++i) {
            v[i] = a[i];
        }
    }

    ~Vector() {
        delete[] v;
    }

    T operator*(Vector& y) {
        T sum = 0;
        for (int i = 0; i < size; ++i) {
            sum += v[i] * y.v[i];
        }
        return sum;
    }

    void display() {
        for (int i = 0; i < size; ++i) {
            cout << v[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int x[3] = {1, 2, 3};
    int y[3] = {4, 5, 6};

    Vector<int> v1(x, 3);
    Vector<int> v2(y, 3);
    cout << "v1: " << endl;
    v1.display();
    cout << "v2: " << endl;
    v2.display();
    cout << "v1xv2: " << v1*v2 << endl;
    
    float a[3]={1.1,2.2,3.3};
    float b[3]={4.4,5.5,6.6};

    Vector<float> v3(a,3);
    Vector<float> v4(b,3);

    cout<<"v3: "<<endl;
    v3.display();
    cout<<"v4: "<<endl;
    v4.display();

    cout<<"v3*v4: "<<v3*v4<<endl;


}