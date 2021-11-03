// Write C++ program to demonstrate the concept of Encapsulation:
// Create the class employee with salary as private member. The class should have two public methods namely, getsalary and printsalary.
// getsalary for taking salary input from user and printsalary for printing the salary.
// Create the object of the class and access both the methods and display salary.

#include<iostream>

using namespace std;

class employee
{
    private:
    long salary;

    public:
    void getsalary()
    {
        cout << "\n Enter salary : ";
        cin >> salary;
    }

    void printsalary()
    {
        cout << "\n Salary is : " << salary;
    }
};

int main()
{
    employee e;

    e.getsalary();
    e.printsalary();
    return 0;
}