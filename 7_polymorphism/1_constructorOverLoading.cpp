#include <iostream>
using namespace std;

class Student{
public:
    string name;
    // construcotr overloading
    Student(){
        cout << "non-parametized constructor\n";
    }
    Student(string name){
        this->name = name;
        cout<< "parametrized constructor\n";
    }
    
};




int main(){
    // non-parameterized constructor will called;
    Student s1;

    // parameterized constructor will called;
    Student s2("fasial");
    


    return 0;
}