#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    if(n>=100 && n<=999){
        cout<<"three digit number ";
    }
    else{
        cout<<"Not three digit number";
    }
}