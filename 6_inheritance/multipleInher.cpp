#include<iostream>
using namespace std;

class Student {
    public:
        string name;
        int rollno;
};

class Teacher {
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
    t1.name = "hemant sir";
    t1.subject = "engineering";
    t1.researchArea = "aerospace engineering";

    cout << t1.name <<endl;
    cout << t1.subject<<endl;
    cout << t1.researchArea<<endl;
}