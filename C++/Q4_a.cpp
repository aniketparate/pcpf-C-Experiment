#include<iostream>
#include<string.h>

using namespace std;

class Person
{
    protected:
    char Name[20];
    int Age;

    public:  
    void getdata1()
    {
        cout << "\n Enter your name : ";
        cin >> Name;
        cout << " Enter your age : ";
        cin >> Age;
    }
    
    void putdata1()
    {
        cout << "\n Name : " << Name << endl;
        cout << " Age : " << Age << endl;
    }
};

class Employee : public Person
{
    protected:
    char Designation[20];
    int Basic, DA, HRA, CCA;
    
    public:
    void getdata2()
    {
        cout << " Enter your Designation : ";
        cin >> Designation;
        cout << " Enter Basic : ";
        cin >> Basic;
        cout << " Enter DA : ";
        cin >> DA;
        cout << " Enter HRA : ";
        cin >> HRA;
        cout << " Enter CCA : ";
        cin >> CCA;
    }

    void putdata2()
    {
        cout << " Designation : " << Designation << endl;
        cout << " Basic : " << Basic << endl;
        cout << " DA : " << DA << endl;
        cout << " HRA : " << HRA << endl;
        cout << " CCA : " << CCA << endl;
    }
};

class Salary : public Employee
{
    protected:
    int Total_salary;

    public:
    void display()
    {
        Total_salary = (Basic + DA + HRA + CCA);
        cout << " Total Salary : " << Total_salary << endl;
    }
};  

int main(int argc, char const *argv[])
{
    Salary s;
    
    s.getdata1();
    s.getdata2();
    s.putdata1();
    s.putdata2();
    s.display();

    return 0;
}