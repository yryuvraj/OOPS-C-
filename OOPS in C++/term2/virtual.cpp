#include<bits/stdc++.h>
using namespace std;

// A virtual function is a member function which is declared within the base class and is 
// red-defined in the derived class ! 
// FUNCTIONS ARE DECLARED WITH THE virtual KEYWORD IN THE BASE CLASS
// resolving of function is done in run-time
 
class MyBase{
    public:
    void show(){
        cout << "Base Class SHOW function called" << endl;
    }
    virtual void print(){
        cout << "Base Class PRINT function called" << endl;
    }
};

class MyDerived : public MyBase{
    public:
    void show(){
        cout << "Derived Class SHOW function called" << endl;
    }
    void print(){ //no need to define it as virtual in the derived class again
        cout << "Derived Class PRINT function called" << endl;
    }
};

class Myderived2 : public MyDerived{
    
};

int main(){
    MyBase *baseptr;
    MyDerived derivedObj;
    baseptr = &derivedObj;

    //dynamically (called) run-time polymorphism.
    baseptr->print(); //derived class print function was called 
    baseptr->show();  // BUT base class show function was called -> because of "virtual"
}