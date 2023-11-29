#include<iostream>
using namespace std;
int main()
{
    int a[10],i,max,min,size;
    cout<<"Enter size: ";
    cin>>size;

    cout<<"Enter number\n";

    for (i=0;i<size;i++)
    {
        
        cin>>a[i];
    }
    max=min=a[0];
    for (i=0;i<size;i++)
    {
        if (a[i]>max){
            max=a[i];
        }
        if (a[i]<min){
            min=a[i];
        }
       
    }
    cout<<"Max number is "<<max;
    cout<<"Min number is"<<min;
    
    return 0;
}