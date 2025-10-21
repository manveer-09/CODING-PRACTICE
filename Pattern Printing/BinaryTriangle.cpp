#include<iostream>
using namespace std;
int main(){
    // 1
    // 0 1
    // 1 0 1
    // 0 1 0 1
    int n;
    cout<<"No. of rows :";
    cin>>n;
    // int a=1;
    // for(int i=1;i<=n;i++){
    //     if(i%2==0) a=0;
    //     else a=1;
    //     for(int j=1;j<=i;j++){
    //         cout<<a<<" ";
    //         if(a==1)  a=0;
    //         else a=1;
             
    //     }
    // cout<<endl;
    // }

    // method 2
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0)  cout<<1;
            else cout<<0;
        }
        cout<<endl;
    }
}