#include<iostream>
using namespace std;
class  customer{
    string name;
    int account_number;
    int balance;
     public:
    inline customer(string a, int b, int c):name(a),account_number(b),balance(c){

    }
    
    void display(){
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
    }

};

int main(){
    customer A1("mohit",876,9000);
    A1.display();

}