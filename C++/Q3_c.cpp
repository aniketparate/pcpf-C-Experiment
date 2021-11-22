#include<iostream>

using namespace std;

class BASE
{
    private:
        char name[20] = "ANIKET";

    protected:
        int roll_no = 45;

    public:
        int age = 20;

        void Name()
        {
            cout << " NAME : " << name << endl;
        }
};

class DERIVED : private BASE
{
    public:
        void RollNo()
        {
            cout << " ROLL NO : " << roll_no << endl;
        }

        void Age()
        {
            cout << " AGE : " << age << endl;
        }
};

int main(int argc, char const *argv[])
{
    DERIVED d;

    cout << " PRIVATE : It cannot be accessed " << endl;
    cout << " PROTECTED : ";
    d.RollNo();
    cout << " PUBLIC : ";
    d.Age();

    return 0;
}
