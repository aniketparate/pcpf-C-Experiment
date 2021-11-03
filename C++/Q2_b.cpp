// Write C++ program to demonstrate the initialization and finalization:
// Design a class named Box whose dimensions are integers and private to the class.
// The dimensions are length, breadth and height. The    default constructor of the class should initialize length,
// breadth and height to zero.  The parameterized constructor Box(int length, int breadth, int height) 
// should Initialize Box's length, breadth and height to the values given by user.   The class should have 4 functions.
//    int getLength() - Return box's length
//    int getBreadth() - Return box's breadth
//    int getHeight() - Return box's height
//    long long CalculateVolume() - Return the volume of the box

#include<iostream>

using namespace std;

class Box
{
    private:
    float length;
    float breadth;
    float height;

    public:
    Box() {
        length = 0;
        breadth = 0;
        height = 0;
    }

    Box(int l, int b, int h) {
        length = l;
        breadth = b;
        height = h;
    }

    int getLength() {
        return length;
    }

    int getBreadth() {
        return breadth;
    }

    int getHeight() {
        return height;
    }

    long CalculateVolume() {
        return getLength() * getBreadth() * getHeight();
    }
};

int main()
{
    Box b;
    cout << "\n Length : " << b.getLength();
    cout << "\n Breadth : " << b.getBreadth();
    cout << "\n Height : " << b.getHeight();
    cout << "\n Volume : " << b.CalculateVolume();

    cout << "\n-------------------------";

    Box b1(7, 8, 9);
    cout << "\n Length : " << b1.getLength();
    cout << "\n Breadth : " << b1.getBreadth();
    cout << "\n Height : " << b1.getHeight();
    cout << "\n Volume : " << b1.CalculateVolume();

    return 0;
}
