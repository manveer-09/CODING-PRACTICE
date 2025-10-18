#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    if(n%5==0 || n%3==0){
        if(n%15!=0)
        cout<<"number is divisible by 5or 3 but not 15";
        else{
            cout<<"not matching condition";
        }
    }
    else {
        cout<<"not matching condition";
    }
    
}