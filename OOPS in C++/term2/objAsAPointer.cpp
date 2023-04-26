#include<bits/stdc++.h>
using namespace std;

class Base {
    public:
    void show(){
        cout << "Base class\n";
    }
};

class Derived: public Base{
    public:
    void show(){
        cout << "Derived Class\n";
    }
};

int main(){
// Base b; //Base class object
// Derived d; //Derived class object
// b.show(); //Early Binding Ocuurs
// d.show();

Base* b; //Base class pointer
Derived d; //Derived class object
b = &d;
b->show(); //Early Binding Occurs
}