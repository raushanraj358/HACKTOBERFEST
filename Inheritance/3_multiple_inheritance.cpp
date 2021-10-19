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

class FourWheeler
{
    public:
    FourWheeler()
    {
        cout<<"This is a 4 Wheeler Vehicle"<<endl;
    }
};

class Car: public Vehicle,public FourWheeler
{

};
int main(int argc, char const *argv[])
{
    Car obj;
    return 0;
}
