#include<iostream>
using namespace std;

class Order
{
    int orderID;
    static int totalOrders;
    public:
    Order()
    {
        totalOrders++;
        orderID=totalOrders;
        cout<<"Order "<<totalOrders<<" placed with Order ID: "<<orderID<<endl;
    }
    static void getTotalOrders()
    {
        cout<<"Total Orders: "<<totalOrders<<endl;
    }
};

int Order::totalOrders=0;

int main()
{
    Order o1;
    Order::getTotalOrders();
    Order o2;
    Order::getTotalOrders();
    Order o3;
    Order::getTotalOrders();
}