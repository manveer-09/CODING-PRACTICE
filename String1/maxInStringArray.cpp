#include<iostream>
#include<string>
using namespace std;
int main(){
    string arr[]={"0123","0023","456","0182","940","002901"};
    int max=stoi(arr[0]);
    string maxs=arr[0];
    int idx=0;
    for(int i=1;i<=5;i++){
        int x=stoi(arr[i]);
        if(x>max){
            max=x;
            maxs=arr[i];
            idx=i;
        }
    }
    cout<<maxs<<" "<<idx;
}