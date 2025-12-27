#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    if(n<2){
        cout<<"Second largest does not exist";
    }
    int arr[n];
    cout<<"Enter the element :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=INT_MIN;
    int smax=INT_MIN;

    for(int i=0;i<n;i++){
        if(max<arr[i]){
            smax=max;
            max=arr[i];
        }
        else if ( max!=arr[i] && smax<arr[i]){
            smax=arr[i];
        }
    }
    cout<<smax;

}