#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter rows of  matrix :";
    cin>>m;
    int n;
    cout<<"Enter cols of matrix :";
    cin>>n;
    int a[m][n];
    cout<<"Enter the element of matrix :";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<endl;

    //  wave print
    for(int j=0;j<n;j++){
        if(j%2==0){
            for(int i=0;i<m;i++){
                cout<<a[i][j]<<" ";
            }
        } 
        else{
            for(int i=n-1;i>=0;i--){
                cout<<a[i][j]<<" ";
            }
        }
    }
}