#include<iostream>
using namespace std;

void fun(){
    static int x = 0; // without static it give me x = 0 three time
    cout << "X : "<< x <<endl;
    x++;
}

class A{
    public:
        int x;

        void inc(){
            x = x + 1;
        }
};


class ABC{
    // checking the ordering of constructor and destructor
    public:
        ABC(){
            cout << "I am constructor"<<endl;

        }

        ~ABC(){
            cout << "I am destructor"<<endl;
        }
};

int main(){

    A obj1;
    A obj2;
    obj1.x = 10;
    obj2.x = 20;
    cout << obj1.x << endl;
    obj1.inc();
    cout << obj1.x << endl;

    cout << obj2.x << endl;
    obj2.inc();
    cout << obj2.x << endl;





    if(true){
        static ABC object; // using static keyword. it will saved as lifetime in program
                           // when the complete main funciton end. then only, destructor function will called.
    

    }
    cout << "End of Main Function"<<endl;

    return 0;
}








// Explore friend function and friend class.