#include<iostream>
using namespace std;

class Base 
{
    public:
    int x;
    void show()
    {
        cout<<"\nValue of x in Show class:"<<x;
    }
};
class Derived: public Base
{
    public:
    int y;
    void display()
    {
        cout<<"\nValue of x in Derived class:"<<x<<" and value of y in Derived class:"<<y;
    }
};
int main(int argc, char const *argv[])
{
    cout<<"\nProgram Name: - Write a Program in C++ Language to implement the concept of simple inheritance.";
    cout<<"\nName : - Sarthak Mishra ";
    cout<<"\nEnrollement no.: - A2345920084";
    cout<<"\nSection: - 3CSE2 Evening";
    cout<<"\n--------------------------------------------------------------------\n";

    Base b;
    b.x = 25;
    b.show();
    Derived d;
    d.x = 10;
    d.y =15;
    d.show();
    d.display();
    return 0;
}