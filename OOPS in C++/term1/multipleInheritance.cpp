#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    int a;

};

class B{
    public:
    int b;
};

class C : public A, public B{
    
    
};

int main(){
    C object;
    object.a = 5;
    object.b = 6;
    cout << object.a;

}