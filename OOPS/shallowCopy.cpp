#include <iostream>
using namespace std;
class student {

    public:
    string name;
    double *cgpaptr;

    student (string name,double cgpa){
      this->  name=name;
      cgpaptr=new double;
      *cgpaptr=cgpa;
    }

    student (student & obj){
        this-> name =obj.name;
        this->cgpaptr=obj.cgpaptr;
    }
     
    void display (){
        cout<<"name : "<< name<<endl;
        cout<<"cgpa :"<<*cgpaptr<<endl;
     }

    
};
    int main(){
    student obj1("Rahul",9.7);
    obj1.display();
    student obj2(obj1);
    *(obj2.cgpaptr)=8.7;
     obj1.display();

}