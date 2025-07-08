#include<iostream>
using namespace std;


class Person {
    public:
        int age;
        string gender;
};


class Student {
    public:
        string name;
        int rollno;
};

class Teacher: public Person {
    public:
        string subject;
        double salary;
};

class TA : public Student, public Teacher {
    public:
        string researchArea;
};



int main(){
    TA t1;
    Teacher t2;


    t1.name = "hemant sir";
    t1.subject = "engineering";
    t1.researchArea = "aerospace engineering";

    cout << t1.name <<endl;
    cout << t1.subject<<endl;
    cout << t1.researchArea<<endl;
    cout << endl;

// now for t2 teacher
    cout << "Now for t2 teacher:"<<endl;

    t2.gender = "hemant sir";
    t2.subject = "engineering";
    t2.age = 43;
    t2.salary = 230000;


    cout << t1.name <<endl;
    cout << t1.subject<<endl;
    cout << t1.researchArea<<endl;
}