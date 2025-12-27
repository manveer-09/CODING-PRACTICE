#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(7);
    cout<<"size is :"<<v.size()<<endl;
    cout<<"capacity is :"<<v.capacity()<<endl;
    v.push_back(5);
    cout<<"size is :"<<v.size()<<endl;
    cout<<"capacity is :"<<v.capacity()<<endl;
    v.push_back(8);
    cout<<"size is :"<<v.size()<<endl;
    cout<<"capacity is :"<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"size is :"<<v.size()<<endl;
    cout<<"capacity is :"<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"size is :"<<v.size()<<endl;
    cout<<"capacity is :"<<v.capacity()<<endl;
}