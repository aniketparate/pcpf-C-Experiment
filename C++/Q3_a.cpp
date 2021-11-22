// We are going to simulate 

#include<iostream>

using namespace std;

class toll
{
    static int no_of_cars;
    static float amount;

    public:
    toll() {
        cout << " A car is passed ...";
        no_of_cars++;
    }

    void calculate_amt(int ty) {
        if (ty == 0)
        {
            amount += 40;
        }
    }

    void display() {
        cout << "\n Total no of cars : " << no_of_cars;
        cout << "\n Total amount collected = " << amount;
    }
};

int toll :: no_of_cars = 0;
float toll :: amount = 0;

int main()
{
    int lane_no, type;
    char ch = 'y';
    int lane[5] = {0, 0, 0, 0, 0};

    do
    {
        do
        {
            cout << "\n Enter lane number (1 - 5) : ";
            cin >> lane_no;
        } while (lane_no > 5);
        
        do
        {
            cout << " Enter type of car (0 for Paying and 1 for Non-Paying) : ";
            cin >> type;
        } while (type < 0 || type > 1);

        toll t;
        t.calculate_amt(type);
        t.display();
        switch (lane_no)
        {
            case 1: lane[0]++;
                break;
                
            case 2: lane[1]++;
                break;

            case 3: lane[2]++;
                break;

            case 4: lane[3]++;
                break;

            case 5: lane[4]++;
                break;
        
            default:
                break;
        }
        cout << "\n Any more cars (y/n) ? : ";
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');
    
    cout << "\n";

    for (int k = 0; k < 5; k++)
    {
        cout << " Total cars passed through lane " << k+1 << " is : " << lane[k] << endl;
    }
    return 0;
}