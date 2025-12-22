#include <iostream>
using namespace std;

// Base class
class Person {
public:
    string name;
    int age;
};

// Derived class 1 (Hierarchical)
class Student : public Person {
public:
    int rollno;
};

// Derived class 2 (Hierarchical)
class Teacher : public Person {
public:
    string dept;
};

// Derived class (Multiple inheritance)
class TeachingAssistant : public Student, public Teacher {
public:
   double salary;
};

int main() {
    TeachingAssistant t1;
    t1.dept="CS";
    t1.rollno=987;
    cout<<t1.dept<<endl;
    cout<<t1.rollno<<endl;
    return 0;
}