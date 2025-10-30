#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int roll_no;
    int age;
};
int main(){
    student s1;
    s1.name="Preet";
    s1.roll_no=34;
    s1.age=20;
    cout<<s1.name<<" "<<s1.roll_no<<" "<<s1.age;
    


}