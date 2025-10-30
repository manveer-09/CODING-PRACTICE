#include<iostream>
using namespace std;
class customer{
    string name;
    int account_number;
    int balance;
    public:

    customer(string a,int b,int c){
        name=a;
        account_number=b;
        balance=c;
    }

    //Copy Constructor
    customer(customer &B){
        name=B.name;
        account_number=B.account_number;
        balance=B.balance;
    }

    void display(){
        cout<<name<<" "<<account_number<<" "<<balance<<" "<<endl;
    }
};

int main(){
    customer A1("mohit",45 ,5555);
    A1.display();
    customer A2(A1);
    A2.display();
    A2=A1;
    A2.display();

}