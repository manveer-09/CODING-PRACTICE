#include<iostream>
using namespace std;
int main(){
    // ****
    // ***
    // **
    // *
    // no. of rows + no. of star = n+1
    // i+ no. of star=n+1
    // no. of star= n+1-i
    int n;
    cout<<"No. of rows :";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            cout<<"*";
           }
           
        cout<<endl;
    }
}