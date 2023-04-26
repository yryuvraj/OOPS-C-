#include<iostream>
using namespace std;

class Base {
    public:
    virtual void show() {
    cout << "Base class" << endl;
    }
};

class Derived : public Base {
    public:
    void show() {
    cout << "Derived Class" << endl;
    }
};

int main() {
    Base* b; //Base class pointer
    Derived* f;
    Base e;
    Derived d; //Derived class object
    b = &d;
    b->show(); //Late Binding Occurs
    b = &e;
    b->show();
    cout << "Derived pointer" <<endl;
    f = &d;
    f->show();
    //f= &e; //Error ---> derived ke andar base nahi daal sakte hai 
    f->show();
    return 0;
}