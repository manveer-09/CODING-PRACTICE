#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the size of array:";
cin>>n;
int arr[n];
cout<<"Enter the element of array:";
for(int i=0;i<=n-1;i++){
    cin>>arr[i];
}
int key;
cout<<"Enter element you want to find:"; 
cin>>key;
// greater than number
int count=0; 
for(int i=0;i<=n-1;i++){
    if(arr[i]>key){
        count++;
    }
}
cout<<count;
}