#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    
};

class Students : public Person {
public:
    int rollno;

   
};

class GradStudent : public Students {
    public: 
        string reaserchArea;
};

int main() {
    GradStudent s1;
    s1.name = "tony stark";
    s1.reaserchArea = "quantum phy";
    cout<<s1.name<<endl;
    cout<<s1.reaserchArea<<endl;

    return 0;
}
