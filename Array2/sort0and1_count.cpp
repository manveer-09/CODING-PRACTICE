#include<iostream>
#include<vector>
using namespace std;
void sort0and1(int arr[],int n){
    int count0=0;
    int count1=0;
    for(int i=0;i<n;i++){
      if(arr[i]==0)  count0++;
      else count1++;
    }

    for(int i=0;i<count0;i++){
       arr[i]=0;
    }

    for(int i=count0;i<n;i++){
       arr[i]=1;
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

    sort0and1(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    
}