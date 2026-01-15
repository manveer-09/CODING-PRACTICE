#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string str="raman is a math teacher";
    stringstream ss(str);
    string temp;
    while(ss>>temp){
        cout<<temp<<endl;
    }
}