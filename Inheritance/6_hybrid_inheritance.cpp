#include<iostream>

using namespace std;

class Vehicle 
{
    public:
    Vehicle()
    {
        cout<<"This is a Vehicle"<< endl;
    }
};

class Fare
{
    public:
    Fare()
    {
        cout<<"Fare of Vehicle\n";
    }
};

class Car : public Vehicle
{ };

class Bus: public Vehicle,public Fare{ };

int main(int argc, char const *argv[])
{
    cout<<"\nProgram Name: - Write a Program in C++ Language to Types of Inheritance(Multiple and multilevel).";
    cout<<"\nName : - Sarthak Mishra ";
    cout<<"\nEnrollement no.: - A2345920084";
    cout<<"\nSection: - 3CSE2 Evening";
    cout<<"\n--------------------------------------------------------------------\n";

    Bus obj2;
    return 0;
}