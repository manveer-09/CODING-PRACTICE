#include<iostream>
using namespace std;
int main(){
    int sp;
    cout<<"Enter the selling price :";
    cin>>sp;
    int cp;
    cout<<"Enter the cost price:";
    cin>>cp;
    if(sp>cp){
        cout<<"profit is :"<<sp-cp;
    }
    else if(cp>sp){
        cout<<"loss is :"<<cp-sp;
    }
    else{
        cout<<"No loss No profit.";
    }

    

}