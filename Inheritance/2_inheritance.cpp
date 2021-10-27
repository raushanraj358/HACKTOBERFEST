#include<iostream>
using namespace std;

class Rectangle
{
    private:
    int length;
    int breadth;

    public:
    Rectangle(int l = 0, int b = 0);
    int getLength();
    int getBreadth();

    void setLength(int l);
    void setBreadth(int b);
    int area();
    int perimeter();
};
class Cuboid: public Rectangle
{
    private:
    int height;
    public:
    Cuboid (int l = 0, int b = 0, int h = 0)
    {
        height = h;
        setLength(l);
        setBreadth(b);
    }
    int getHeight();
    void setHeight();
    int Volume()
    {
        return getLength()*getBreadth()*height;
    }
};

int main(int argc, char const *argv[])
{
    Cuboid c(10,5,3);
    cout<< c.getLength();
    cout<< c.Volume();
    cout<< c.area();
    return 0;
}
