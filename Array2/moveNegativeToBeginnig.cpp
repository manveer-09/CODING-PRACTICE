#include<iostream>
using namespace std;
void moveNegative(int arr[],int n){
   int i=0;
   int j=n-1;
    
   while(i<j){
    if(arr[i]<0)   i++;
    else if(arr[j]>=0)  j--;
    else{
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
   }

}
int main(){
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    moveNegative(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    
}