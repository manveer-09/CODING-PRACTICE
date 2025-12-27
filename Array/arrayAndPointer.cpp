#include<iostream>
using namespace std;
int main(){
    int arr[]={5,6,7,3,2};
    // int *ptr=&arr[0]
    int *ptr=arr;
    ptr[0]=8;
    // accessing element using pointer
    // for(int i=0;i<5;i++){
    //     cout<<ptr[i]<<" ";
    //     cout<<i[ptr];
    // }

    for(int i=0;i<5;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr=arr;
}