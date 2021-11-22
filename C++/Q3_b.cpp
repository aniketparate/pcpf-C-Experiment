#include<iostream>
#include<conio.h>
#include <string.h>

using namespace std;

class train
{
    protected:
        int train_no;
        int seats_first;
        int seats_second;
        int seats_third;

    public:
        train(int tr, int f, int s, int t)
        {
            train_no = tr;
            seats_first = f;
            seats_second = s;
            seats_third = t;
        }

        void total_seats()
        {
            cout << "\n Train seats";
            cout << "\n Train No    First Class     Second Class    Third Class";
            cout << "\n " << train_no << "\t\t" << seats_first << "\t\t" << seats_second << "\t\t" << seats_third;
        }
};

class reservation : public train
{
    protected:
        int booked_first;
        int booked_second;
        int booked_third;
    
    public:
        reservation(int bf, int bs, int bt, int a, int b, int c, int d) : train(a, b, c, d)
        {
            booked_first = bf;
            booked_second = bs;
            booked_third = bt;
        }

        void booked(int a, int b, int c);
        void cancel(int x, int y);
        void disp_status();
};

void reservation :: booked(int bf, int bs, int bt)
{
    booked_first = bf;
    booked_second = bs;
    booked_third = bt;
    cout << "\n Train No : " << train_no;
    cout << "\n Seats booked in first class : " << booked_first;
    cout << "\n Seats booked in second class : " << booked_second;
    cout << "\n Seats booked in third class : " << booked_third;
}

void reservation :: cancel(int cl, int p)
{
    if (cl == 1){
        booked_first = booked_first - p;
    }
    else if (cl == 2)
    {
        booked_second = booked_second - p;
    }
    else if (cl == 3)
    {
        booked_third = booked_third - p;
    }
}

void reservation :: disp_status()
{
    cout << "\n Available seats";
    cout << "\n Train No    First Class     Second Class    Third Class";
    cout << "\n " << train_no << "\t\t" << seats_first - booked_first << "\t\t" << seats_second - booked_second << "\t\t" <<  seats_third - booked_third;
}

int main(int argc, char const *argv[])
{
    int tr_no, f, s, t, bf, bs, bt, cl, seats, ch;
    float d;

    cout << "\n Enter train no : ";
    cin >> tr_no;
    cout << "\n Enter total Seats in first class : ";
    cin >> f;
    cout << "\n Enter total Seats in second class : ";
    cin >> s;
    cout << "\n Enter total Seats in third class : ";
    cin >> t;

    train t1(tr_no, f, s, t);
    t1.total_seats();
    reservation r(bf, bs, bt, tr_no, f, s, t);
    do
    {   
        cout << "\n\n Menu : \n 1.Booking\n 2.Cancellation\n 3.Display Status\n Enter a choice : ";
        cin >> ch;

        switch (ch)
        {
            case 1: cout << "\n In which class you want to book seats? (1 -3) : ";
                    cin >> cl;
                    cout << " Enter no of seats : ";
                    cin >> seats;
                    if (cl > 3 || cl < 1)
                    {
                        cout << " Invalid choice try again ";
                    }
                    switch (cl)
                    {
                        case 1: bf = seats;
                                bs = bt = 0;
                                break;

                        case 2: bs = seats;
                                bf = bt = 0;
                                break;

                        case 3: bt = seats;
                                bf = bs = 0;
                                break;
                    }
                    r.booked(bf, bs, bt);
                    break;

            case 2: cout << "\n In which class you want to cancel seats? (1 -3) : ";
                    cin >> cl;
                    cout << " How many seats do you want to cancel? : ";
                    cin >> seats;
                    if (cl > 3 || cl < 1)
                    {
                        cout << " Invalid choice try again ";
                    }
                    r.cancel(cl, seats);
                    break;

            case 3: r.disp_status();
                    break;

            default: cout <<" Invalid Choice";
                     exit(1);
        }
    } while (1);

    return 0;
}