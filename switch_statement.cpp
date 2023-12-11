#include <iostream>
using namespace std;

int main () {

    char grade ;
    cout << "Choose your grade i.e. A, B, C,D,F" << endl;
    cin >> grade;

    switch(grade)
    {
        case 'A':
            cout << "Outstanding! " <<endl;
            break;
        case 'B' :
        case 'C' :
            cout << "Well done" << endl;
            break;
        case 'D' :
            cout << "Pass" << endl;
            break;
        case 'F' :
            cout << "Try Again" << endl;
            break;
        default :
            cout << "Invalid grade" <<endl;

    }
    cout << "Your grade is " << grade << endl;
    return 0;
}