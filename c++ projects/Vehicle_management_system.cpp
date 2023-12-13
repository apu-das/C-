#include<iostream>
using namespace std;

class Vehicle{

    private:
        string make, model;     // firstly take three private data
        int year;
    public:
        void inputData(){       // take input of these data 
            cout<< "Enter Company Name : ";
            cin>> make;
            cout<< "Enter Model : ";
            cin>> model;
            cout<< "Enter Year : ";
            cin>> year;
        }

        void display() {        // display the data
            cout<< "Make : " <<make<< endl;
            cout<< "Model : " <<model<< endl;
            cout<< "Year : " <<year<< endl;

        }

};

class Car : public Vehicle{

    private: 
        int numDoor;        // take numDoor variable in private
    public:
        void inputData(){   // take input data of number of door in public
            Vehicle:: inputData();
            cout<< "Enter Number of Doors : ";
            cin>> numDoor;
        }

        void display(){     // diplay the data
            Vehicle:: display();
            cout<< "Doors :" << numDoor<< endl;
        }

};

class ToyotaCar : public Car{
    private:
        string trimlevel;
    public:
        void inputData(){
            Car:: inputData();
            cout<< "Enter Trim Level : ";
            cin>> trimlevel;
        }

        void display(){
            Car:: display();
            cout<< "Trim Level : " << trimlevel <<endl;
        }
};

main(){
    ToyotaCar myCar;     //take a object named myCar of ToyotaCar class
    cout<< "----------------Input Car Info --------------" <<endl;
    myCar.inputData();
    cout<< "----------------Output Car Info ---------------"<<endl;
    myCar.display();
}