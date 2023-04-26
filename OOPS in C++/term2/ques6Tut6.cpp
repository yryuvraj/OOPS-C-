#include<iostream>
using namespace std;

class A{
    public:
    virtual void fun();
};
class B : public A {
    void fun();
};

int main(){
    
    cout << sizeof(A) << endl;
    cout << sizeof(B);
}