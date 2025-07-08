#include<iostream>
using namespace std;

class Parent {
public:
    
    void getInfo(){
        cout<< "parent class"<<endl;
    }

    virtual void hello(){
        cout<< "Hello from parent class"<<endl;
    }
};

class Child : public Parent {
public:

    

    void getInf(){
        cout<<"child class";
    }

    void hello(){
        cout<< "hello from child class"<<endl;
    }
};

int main(){
    
    Child c;
    c.hello();

    return 0;
}