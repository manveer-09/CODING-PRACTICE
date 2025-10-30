#include<iostream>
using namespace std;
class student {
    public:
    int age;
    string name;
    int rollno;
};
int main(){
    student *S= new student;
    (*S).name="man";
    (*S).age=10;
    (*S).rollno=156;
    cout<<S->name<<endl;
    cout<<S->age<<endl;


}