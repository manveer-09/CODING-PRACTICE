#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 1st number:";
    cin>>a;
    cout<<"Enter 2nd number:";
    cin>>b;
    cout<<"Enter 3rd number:";
    cin>>c;
    if(a>b && a>c){
        cout<<a<<" is largest:";
    }
    else if(b>a && b>c){
        cout<<b<<" is largest";
    }
    else{
        cout<<c<<" is largest";
    }
}