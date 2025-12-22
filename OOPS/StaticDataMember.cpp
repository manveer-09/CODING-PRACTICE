#include <iostream>
using namespace std;
class Customer{
    string name;
    int account_number,balance;
    static int customer_total;    //static data member

    public:
    Customer(string name,int account_number,int balance)
    {
        this-> name = name;
        this-> account_number = account_number;
        this-> balance = balance;
        customer_total++;
    }

    void display()
    {
        cout<<name<<" "<<account_number<<" "<<balance<<" "<<customer_total<<endl;
    }
    
    // static member function
    static void accessStatic()
    {
        cout<<customer_total<<endl;
    }
};

    int Customer :: customer_total=0;

int main(){
   Customer A1("Preet",1,1000);
   Customer A2 ("Mohan",2,2000);
   A1.display();
   A2.display();
   Customer A3("johan",3,1200);
   A3.display();
   Customer::accessStatic();  // accessing static function 
}