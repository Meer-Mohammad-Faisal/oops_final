#include <iostream>
#include <string>
using namespace std;    


class Teacher {

    private: // access specifier
        double salary;

    public: // access specifier
    // properties/ attributes
    string name;
    string dept;
    string subject;
    

    // methods/ functions/ member functions
    void changeDept(string newDept) {
        dept = newDept;
    }

    // as we know salary is private, so we use getter and setter methods to access it
    // setter method
    void setSalary(double newSalary) {
        salary = newSalary;
    }
    
    // getter method
    void getSalary(){
       cout<< " salaray is:"<<salary;
    }

};

class Student {
    public: // access specifier
    // properties/ attributes
    string name;
    int rollNo;
    string dept;
    double cgpa;

    // methods/ functions/ member functions
    void changeDept(string newDept) {
        dept = newDept;
    }
};

// data hiding. using encapsulation
class Account {
    private: 
        double balance;
        string password; // data hiding

    public: // access specifier
        string accountNumber;
        string accountHolderName;
};



int main(){
    Teacher t1; // create an object of class Teacher
    t1.name = "ballu";
    t1.dept = "CSE";
    t1.subject = "OOP";
    // t1.salary = 50000; // we can not access salary directly because it is private
    t1.setSalary(50000); // using setter method to set salary

    cout << "Name: " << t1.name << endl;
    cout << "Department: " << t1.dept << endl;  
    cout << "Subject: " << t1.subject << endl;
    //cout << "Salary: " << t1.salary << endl;
    t1.getSalary(); // using getter method to get salary
    return 0;
}