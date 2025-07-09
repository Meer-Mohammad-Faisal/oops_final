#include<iostream>
using namespace std;

void fun(){
     int x = 0; // without static it give me x = 0 three time
    cout << "X : "<< x <<endl;
    x++;
}

int main(){

    fun();
    fun();
    fun();

}