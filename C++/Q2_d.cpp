// Write a c++ program to demonstrate how a static member behaves. Create class student that has 2 data members viz.
// Student name and roll no and 2 functions getdata() and display(). A class has also a static member count which will be 
// incremented in function display().  A getdata() will accept student’s name and roll no.  
// Function display() will display  the name and roll no and count. Create array of 5 student objects  and display their details.

#include<iostream>

using namespace std;

class student
{
    private:
    string student_name;
    int student_rollno;
    
    public:
    static int count;
    
    void getdata() {
        cout << "\n Enter student's name : ";
        cin >> student_name;
        cout << " Enter student's rollNo : ";
        cin >> student_rollno;
        ++count;
    }

    void display() {
        cout << "\n Student's Name : " << student_name;
        cout << "\n Student's RollNo : " << student_rollno;
        cout << "\n Counter : " << count << endl;
    }
    
};

int student :: count = 0;

int main()
{
    student s[5];
    
    for (int i = 0; i < 5; i++)
    {
        s[i].getdata();
        s[i].display();
    }
    
    return 0;
}
