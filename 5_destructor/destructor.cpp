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

        //destructor
        ~Student(){
            cout<< "Hi, I delete everything"<<endl;
            delete cgpaPtr;
        }

        void getInfo(){
            cout<<"name: "<< name <<endl;
            cout<<"cgpa:"<<*cgpaPtr<<endl;
        }
};


int main(){
    Student s1("fasial", 8.2);
    s1.getInfo();
    // destructor is called and delete everything


    return 0;
}