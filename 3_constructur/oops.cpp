#include <iostream>
using namespace std;

class Teacher {

    private: // access specifier
        double salary;

    public: // access specifier

    // properties/ attributes
    string name;
    string dept;
    string subject;




            // // non-parameterized constructor
        // Teacher(){
        //     cout << "Constructor called!" << endl; // constructor
        //     dept = "CSE"; // initializing dept in constructor
        // }

             // parameterized constructor
        Teacher(string name, string dept, string subject, double salary) {
            this->name = name; // using 'this' pointer to refer to the current object
            this->dept = dept;
            this->subject = subject;
            this->salary = salary; // initializing salary
            cout << "Parameterized constructor called!" << endl; // constructor
        }

                // copy constructor
        Teacher( Teacher &orgObj) {
            cout << "Copy constructor called!" << endl; // copy constructor
            this->name = orgObj.name; // copying name
            this->dept = orgObj.dept; // copying dept
            this->subject = orgObj.subject; // copying subject
            this->salary = orgObj.salary; // copying salary
        }
    

    // methods/ functions/ member functions
    void changeDept(string newDept) {
        dept = newDept;
    }

   void gitInfo(){
    cout<<"name: "<<name<<endl;
    cout<<"subject: "<<subject<<endl;
   }

};





int main(){
    Teacher t1("fasial", "Cse", "c++", 250000); // create an object of class Teacher At the same time constructor is called
    // Teacher t2; // create another object of class Teacher At the same time constructor is called


    //t1.gitInfo(); // calling the method to display information

    Teacher t2(t1); // using copy constructor to create a new object t2 from t1
    t2.gitInfo(); // calling the method to display information of t2
    
    return 0;
}