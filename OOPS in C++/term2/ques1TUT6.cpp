#include<iostream>
using namespace std;

class Base{
    public:
    virtual void show() {cout<<"In Base" << endl;}
};
class Derived : public Base{
    public:
    virtual void show() { cout << "in derived" << endl;}
};

int main(){
    Base *bp, b;
    Derived d;
    bp = &d;
    bp->show();
    bp = &b;
    bp->show();
    return 0;
}