#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of rows/columns :";
    cin>>n;
    int arr[n][n];
    //input
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    // print 
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            cout<<arr[i][j]<<" ";
        }
    cout<<endl;
    }
    cout<<endl;

    // transpose in same matrix
    for(int i=0;i<=n-1;i++){
        for(int j=i+1;j<=n-1;j++){
            // swapping i.j and j,i
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }

     // print 
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            cout<<arr[i][j]<<" ";
        }
    cout<<endl;
    }

}