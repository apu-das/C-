/* Write your class name DigitalC to implement a Digital Clock in C++.
Have your data member and Member functions to provide the functionality of digital 12 hours clock.
User input Hours, Minutes and Seconds. Digital clock displaying it's time in form HH: MM: SS  AM/PM ;  0-11 am and 12 to 24 pm */

#include<iostream> 
#include<iomanip>
using namespace std;

class DigitalC{
    private:
        int hours, minutes, seconds;
    public:
        DigitalC(int h, int m, int s){
            hours = h;
            minutes = m;
            seconds = s;
        }

    void DisplayTime(){
        if (hours<10)
        cout<< setfill('0')<<setw(2)<<hours<< ":"<<setw(2)<<minutes<<":"<<setw(2)<<seconds;
        else if(minutes<10)
        cout<< setfill('0')<<setw(2)<<hours<< ":"<<setw(2)<<minutes<<":"<<setw(2)<<seconds;
        else if(seconds<10)
        cout<< setfill('0')<<setw(2)<<hours<< ":"<<setw(2)<<minutes<<":"<<setw(2)<<seconds;


        if(hours>=12)
        cout<< " PM";
        else
        cout<< " AM";
    }

};

main(){
    int hours, minutes,seconds;
    cout<< "Enter Hours : ";
    cin>> hours;
    cout<< "Enter Minutes : ";
    cin>> minutes;
    cout<< "Enter Seconds : ";
    cin>> seconds;
    DigitalC clock(hours, minutes, seconds);
    clock.DisplayTime();

}