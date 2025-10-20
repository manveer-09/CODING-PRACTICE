#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    //4 7 10 13 ...
    // for(int i=4;i<=3*n+1;i+=3){
    //     cout<<i<<endl;
    // }

    //separate variable
      int a=4;
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        a=a+3;
    }
}