#include<iostream>
using namespace std;
// accessing element of array
void display(int *a,int size){
    for(int i=0;i<=size-1;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

// updating
void change(int b[],int size){   // int *b
    b[3]=18;
}
int main(){
    int arr[]={3,6,7,9,3};
    display(arr,5);
    change(arr,5);
    display(arr,5);
}