#include<iostream>
using namespace std;
int main(){
    float m1,m2 ,m3 ,m4 ,m5;
    cout<<"Enter marks of 5 subjects:";
    cin>>m1>>m2>>m3>>m4>>m5;
    int per=(m1+m2+m3+m4+m5)/5;
    if(per>=90)
        cout<<"Grade A";
    else if(per>=80)
         cout<<"Grade B";
    else if(per>=70)
        cout<<"Grade C";
    else if(per>=60)
        cout<<"Grade D";
    else
        cout<<"Fail";
     
}