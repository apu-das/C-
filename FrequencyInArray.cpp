#include<iostream>
using namespace std;
int main(){
    int a[100],i,freq=0,key,size;

    cout<<"Enter Size of the array: ";
    cin>>size;


    cout<<"Enter array elements:\n";
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"\nEnter element fo find frequency:";
    cin>>key;
    for (i=0;i<size;i++)
    {
        if (a[i]==key){
            freq++;
        }
    }
    cout<<"Frequency of " <<key<< "is: "<<freq;
}