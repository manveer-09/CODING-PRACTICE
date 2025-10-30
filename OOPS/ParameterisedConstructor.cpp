#include<iostream>
using namespace std;
class customer{
    string name;
    int account_number;
    int balance;
    public:

    // Default constructor
    customer (){
        name="Ram";
        account_number=398;
        balance=0;
    }

    // Parameterised Constructor
    customer(string name,int account_number,int balance){
    this -> name=name;
    this -> account_number=account_number;
    this ->balance=balance;
    }
     // constructor Overloading
    customer(string a,int b){
        name=a;
        account_number=b;
    }

    void display (){
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
    }
};

int main(){
    customer A1;
    customer A2("Aman",234,4000);
    customer A3("John",576);
    A1.display();
    A2.display();
    A3.display();
}