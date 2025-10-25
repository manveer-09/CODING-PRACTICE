#include<iostream>
#include<cmath>
using namespace std;

int countdigit(int n){
    int count =0;
    while(n>0){
        n/=10;
        count++;
    }
     return count;
}

void armstrong (int num,int digit){
        int n=num,rem;
        double ans =0;
        while(n>0){
            rem = n%10;
            n/=10;
            ans = ans+pow(rem,digit);
        }
    if(ans==num)  cout<<num<<" is armstrong number";
    else   cout<<num<<" is not armstrong number";
}

int main(){
    int num;
    cout<<"Enter a number :";
    cin>>num;
    int digit =countdigit(num);
    armstrong(num,digit);
}