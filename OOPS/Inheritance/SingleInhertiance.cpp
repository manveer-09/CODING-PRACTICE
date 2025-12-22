#include <iostream>
using namespace std;
class Person {
    public:
    string name;
    int age;

    Person (string name,int age){
        this-> name=name;
        this->age=age;
    }

};

class student : public Person{
    public:
    int rollno;
  
    student (string name,int age,int rollno):Person (name,age){
        this->rollno=rollno;
    }

    void display (){
        cout<<"name :"<<name<<endl;
        cout<<"age :"<<age<<endl;
        cout<<"rollno :"<<rollno<<endl;
       
    }
};
int main (){
    student s1("Aman",17,999);
    s1.display();
    return 0;

}