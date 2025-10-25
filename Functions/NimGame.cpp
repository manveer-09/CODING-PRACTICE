#include<iostream>
using namespace std;
int NimGame(int n){
    if(n%4==0) return 0;
    else return 1;
}
int main(){
    int n;
    cin>>n;
   cout<< NimGame(n);
}