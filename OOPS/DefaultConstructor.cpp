#include<iostream>
using namespace std;
class customer{
    string name;
    int account_number;
    int balance;
    public:
    customer(){
        cout<<"It is default constructor.";
    }
};
int main(){
    customer A1;
}