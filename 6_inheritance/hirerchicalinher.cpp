#include<iostream>
using namespace std;

class Person {
    public:
        string name;
        int age;
};

class Student : public Person {
    public:
        int rollno;
};

class Teacher : public Person {
    public:
        string subject;
        double salary;
};

int main(){
    Teacher t1;
    t1.name = "hemant sir";
    t1.subject = "engineering";
   

    cout << t1.name <<endl;
    cout << t1.subject<<endl;
    
}