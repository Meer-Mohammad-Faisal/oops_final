#include<iostream>
using namespace std;

class Shape{  // abstract class
    virtual void draw() = 0; // pure virtual funciton.
};

class Circle : public Shape {
    public: 
        void draw(){
            cout << "Drawing a circle"<<endl;
        }
        
};

int main() {
    // Shape s; // can't access shape bcz it is a abstract class
    Circle c;
    c.draw();

    return 0;
}