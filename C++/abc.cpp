#include<iostream>

using namespace std;

class abc
{
    private:
    static int count;

    public:
    void getdata() {
        ++count;
    }

    void display() {
        cout << " " << count;
    }
};

int main()
{
    abc A[3];

    for (int i = 0; i < 3; i++)
    {
        A[i].display();
        A[i].getdata();
    }
    
    return 0;
}

