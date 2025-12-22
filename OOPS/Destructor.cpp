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
    
    //Destructor
    ~ student(){
        cout<<"Destructor";
        delete cgpaptr; // for dynamic alloction 
    }
     
    void display (){
        cout<<"name : "<< name<<endl;
        cout<<"cgpa : "<<*cgpaptr<<endl;
    }

};
    int main(){
    student obj1("Rahul",9.7);
    obj1.display();
    return 0;
    }
