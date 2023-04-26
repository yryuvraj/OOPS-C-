#include<bits/stdc++.h>
using namespace std;
// A pure virtual function in C++ is a virtual function for which we don't have implementation, 
// we only declare it. A pure virtual function is declared by assigning 0 in declaration. 

// A class is abstract if it contains atleast one PURE virtual function 
class Shape{
    virtual void getArea()=0; //as hume pata nahi hai ki aage kaunse shape ka area chahiye, so we have to just 
    // declare it in the base class so that hum aage ki different shapes waali classes mein, easily getArea() 
    // kar sake.
    // NO IMPLEMENTATION of this function in this class, so this is a pure virtual function 
    // Abstract datga 
};

int main(){

}