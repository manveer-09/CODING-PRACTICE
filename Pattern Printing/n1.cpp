#include<iostream>
using namespace std;
int main(){
    //1 
    //2 2
    //3 3 3
    //4 4 4 4
    int n;
    cout<<"No. of rows :";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
           }
           
        cout<<endl;
    }
}