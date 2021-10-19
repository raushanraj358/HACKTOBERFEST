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

class Car: public Vehicle
{ };

class Bus : public Vehicle
{ };

int main(int argc, char const *argv[])
{
    Car obj1;
    Bus obj2;
    return 0;
}