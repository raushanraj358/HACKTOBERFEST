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

class FourWheeler: public Vehicle
{
    public:
    FourWheeler()
    {
        cout<<"This is a 4 Wheeler Vehicle"<<endl;
    }
};

class Car: public FourWheeler
{
    public:
    Car()
    {
        cout<<"Car has 4 wheels"<<endl;
    }
};
int main(int argc, char const *argv[])
{
    Car obj;
    return 0;
}