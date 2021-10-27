#include <iostream>

using namespace std;
class M 
{
    public:
    void display()
    {
         cout<<"Class M\n";
    }
};
class N :public M
{
    public:
    void display()
    {
         cout<<"Class N\n";
    }
};

int main()
{
    cout<<"\nProgram Name: - Write a Program in C++ Language to implement Overriding Inheritance.";
    cout<<"\nName : - Sarthak Mishra ";
    cout<<"\nEnrollement no.: - A2345920084";
    cout<<"\nSection: - 3CSE2 Evening";
    cout<<"\n--------------------------------------------------------------------\n";

    N n1;
    n1.display();
    n1.M::display();
    n1.N::display();
    
    

    return 0;
}