#include<iostream>
using namespace std;

class Base{
    public:
    virtual void show() {cout << "in base" << endl;}
};

class Derived{
    public:
    void show() {cout << "in derived" << endl;}
};

int main(){
    Derived *b = new Derived;
    Base *bp= b;
    bp->show();
    Base &br = *bp; //just renaming 
    br.show();
}
