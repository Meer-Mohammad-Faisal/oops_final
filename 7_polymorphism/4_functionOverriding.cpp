#include<iostream>
using namespace std;

class Parent {
public:
    string name;
    int age;
    
    void getInfo(){
        cout<< "parent class"<<endl;
    }
};

class Child : public Parent {
public:

    int dobyear;
    string state;

    // making constructor
    Child(int dobyear,string state, string name){
        this -> dobyear = dobyear;
        this->state = state;
        this -> name = name;
       
    }

    void getInf(){
        cout<< "child class"<<endl;
        cout<<"state is: "<<state<<endl;
        cout<<"date of birth year is: "<<dobyear<<endl;
        cout << "name is : " << name<<endl;
        

    }
};

int main(){
    Child c(2003,"Bihar", "fasial");

    Parent p;
    p.getInfo();
    
    c.getInf();
    

    return 0;
}