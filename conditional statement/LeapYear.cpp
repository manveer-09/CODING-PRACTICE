#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter a year :";
    cin>>year;
    if(year%4==0){
        if(year %100==0){
            if(year % 4==0){
                cout<<"Leap year";
            }
            else{
                cout<<"Not  Leap year ";
            }
        }
        else{
            cout<<"Leap year ";
        }
    }
    else {
        cout<<"Not leap year";
    }
 
}   
