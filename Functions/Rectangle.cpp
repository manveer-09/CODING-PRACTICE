#include<iostream>
using namespace std;
bool rectangle(int a,int b,int c,int d){
    if((a==c) && (b==d) ){
        return 1;
    }
    else {
        return 0;
    }
}
int main(){
    int s1,s2,s3,s4;
    cout<<"Enter four sides :";
    cin>>s1>>s2>>s3>>s4;
   cout<< rectangle(s1,s2,s3,s4);
}