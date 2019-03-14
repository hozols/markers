#include <iostream>
using namespace std;
class Markers
{
    // Access specifier
public:

    // Data Members
    string color;
    float x;
    float y;
    float z;

    // Member Functions()
    Markers() {}

    Markers(const string &color, float x, float y, float z) : color(color), x(x), y(y), z(z) {
    }

    void setcolor(string a)
    {
        color = a;
    }
    void setXYZ(float a, float b, float c)
    {
        x = a;
        y = b;
        z = c;
    }

    void printlaser()
    {
        cout << "Data is: " << color << " " <<  x << " "<< " "<< y << " " << z;
    }

    const string &getColor() const {
        return color;
    }

    float getX() const {
        return x;
    }

    float getY() const {
        return y;
    }

    float getZ() const {
        return z;
    }
};