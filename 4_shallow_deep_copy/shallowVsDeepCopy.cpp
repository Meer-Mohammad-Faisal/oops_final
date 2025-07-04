#include<iostream>
using namespace std;

class Student {
    public:
        string name;
        double* cgpaPtr;

        Student(string name, double cgpa){
            this->name = name;
            cgpaPtr = new double;
            *cgpaPtr = cgpa;
        }

        Student(Student &obj){
            cgpaPtr = new double;
            *cgpaPtr = *obj.cgpaPtr;
        }

        void getInfo(){
            cout<<"name: "<< name <<endl;
            cout<<"cgpa:"<<*cgpaPtr<<endl;
        }
};


int main(){
    Student s1("fasial", 8.2);
    Student s2(s1);

    s1.getInfo();
    *(s2.cgpaPtr) = 9.3;
    s1.getInfo();

    s2.name = "badal";
    s2.getInfo();


    return 0;
}