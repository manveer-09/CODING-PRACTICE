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
bool flag=false;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]=arr[j]){
            flag=true;
            break;
        }
    }
}
if(flag=true){
    cout<<"Array contain duplicates";
}
else{
    cout<<"Array does not contain duplicates";
}
return 0;
}