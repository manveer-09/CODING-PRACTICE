#include<iostream>
using namespace std;
class Person{
    public:
    void displayPerson(){
        cout<<"Person Details"<<endl;
    }
};

// derived class
class Employee : public Person{
    public:
    void displayEmployee(){
        cout<<"Employee details"<<endl;
    }

};

// derived class
class Manager:public Employee{
    public:
    void diplayManager(){
        cout<<"Manager details";
    }
};

int main(){
    Manager m;
    m.displayPerson();
    m.displayEmployee();
    m.diplayManager();
    return 0;

}