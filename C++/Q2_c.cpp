// Write C++ program to demonstrate function overloading for adding two integers, two floats and two arrays

#include<iostream>

using namespace std;

class operation
{
    public:
    int add(int a, int b) {
        return a + b;
    }

    float add(float a, float b) {
        return a + b;
    }
};

int main()
{
    operation o;
    int num1, num2 ,n;
    float num3, num4;
    

    cout << "\n Enter 1st integer number : ";
    cin >> num1;
    cout << " Enter 2st integer number : ";
    cin >> num2;
    cout << "\n Addiiton of "<< num1 <<" and "<< num2 <<" numbers is : " << o.add(num1, num2);

    cout << "\n----------------------------------------------------------";

    cout << "\n Enter 1st float number : ";
    cin >> num3;
    cout << " Enter 2st float number : ";
    cin >> num4;
    cout << "\n Addiiton of "<< num3 <<" and "<< num4 <<" numbers is : " << o.add(num3, num4);
    
    cout << "\n----------------------------------------------------------";

    cout << "\n Enter no of elements in array : ";
    cin >> n;
    float num5[n], num6[n];
    cout << "\n Enter elements in 1st array : \n";
    for (int i = 0; i < n; i++)
    {
        cout << " Enter Element : ";
        cin >> num5[i];
    }
    cout << "\n Enter elements in 2nd array : \n";
    for (int i = 0; i < n; i++)
    {
        cout << " Enter Element : ";
        cin >> num6[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << "\n Sum of elements of array : " << o.add(num5[i], num6[i]);
    }
    
    
    return 0;
}
