#include<bits/stdc++.h>
using namespace std;

//Signifinace of virtual function is that agar virtual nahi hota toh jo neeche line 27 pe "fun" banaya hai 
//woh baaki classes ke liye bhi banana padta, jo kaafi tedious hojata hai aur code ko messy kar deta hai 
//base
class Animal{
    public:
    virtual void eat(){
        cout << "I am eating generic food" << endl;
    }
};
//derived 1
class Cat : public Animal{
    public:
    void eat(){
        cout << "I am eating  cat food" << endl;
    }
};
//derived 2
class Dog : public Animal{
    public:
    void eat(){
        cout << "I am eating dog food" << endl;
    }
};

void fun(Animal *xyz){
    xyz->eat();
}

int main(){
    Animal *ptr;
    Cat catObj;
    Dog dogObj;
    ptr = &catObj;
    fun(ptr); //passing a ptr which points to catObj but is of type Animal in a fun function which 
    // take Animal pointer as a parameter
    // w.r.t line 36 -> if the first eat function was made virtual, then CAT ka EAT function would've been called
    // but yaha pe "virtual" nahi banaya hai, so Animal ka Base class wala eat function will only be called
}

//this all happens at runtime so we achieve runtime polymorphism, heh 