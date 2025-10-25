#include <iostream>
using namespace std;
int main(){
    // 1234321
    //  12321
    //   121
    //    1
    int n;
    cout<<"enter no. of rows:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            cout<<" ";
        }
        for(int k=1;k<=n-i+1;k++){
            cout<<k;
        }
        for(int q=n-i;q>=1;q--){
            cout<<q;
        }
    cout<<endl;
    }
}