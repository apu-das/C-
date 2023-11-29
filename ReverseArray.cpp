#include<iostream>
using namespace std;
int main(){
    int a[100],i,j,size;

    cout<<"Enter Size of the array: ";
    cin>>size;


    cout<<"Enter array elements:\n";
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    // cout<<"\nReverse Order of the array:\n ";
    for (i=size-1;i>=0;i--){
        cout<<a[i];
    }
    return 0;
}