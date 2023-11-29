#include<iostream>
using namespace std;
int main(){
    int money;
    cout<<"How much money do you enter?";
    cin>>money;
    if (money>=100){
        cout<<"Coffee";
    }
    else{
        cout<<"Return in home. And please collect more money.";

    }
    
    return 0;
}