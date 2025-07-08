#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    // Parameterized constructor
    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }

    Person(){
        // parents destructor will call first before the chil
        cout<<"parent constructor"<<endl;
    }
};

class Students : public Person {
public:
    int rollno;


    // // Constructor in derived class calling base constructor
    // Students() {
    //     // it will call after parent constructor
    //     cout << "child constructor ";
    // }

    
    Students(string name, int age, int rollno) : Person( name,  age) {
        this -> rollno = rollno;
    }

    void getInfo() {
        cout << "name : " << name << endl;
        cout << "age : " << age << endl;
        cout << "rollno : " << rollno << endl;
    }
};

int main() {
    // Now you must pass all constructor arguments
    Students s("faisal", 21, 123);
    // s.name = "faisal";
    // s.age = 22;
    // s.rollno = 123;

    s.getInfo();
    return 0;
}
