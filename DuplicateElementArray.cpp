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
    cout<<"\nDuplicate element in array:";
    for (i=0;i<size;i++)
    {
        for (j=i+1;j<size;j++){
            if(a[i]==a[j]){
                printf("%d",a[i]);
            }
        }
        
        
    }
    
}