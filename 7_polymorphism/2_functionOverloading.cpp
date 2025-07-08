#include <iostream>
using namespace std;

class Print {
 public:

    void fun(int x){
        cout<<"int: "<< x << endl;
    }

    void fun(char s){
        cout<<"char: "<<s<<endl;
    }

};

int main(){
    Print p;
    p.fun('s');

    return 0;
}