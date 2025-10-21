 #include<iostream>
 using namespace std;
 int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    int rev=0;
    int lastdigit=0;
    while(n>0){
     
    rev =rev*10;
    lastdigit=n%10;
    rev =rev+lastdigit;
    n/=10;
  
    }
     cout<<rev;
 }

 // r=r*10
 // ld=n%10
 // r=r+ld
 // n/=10