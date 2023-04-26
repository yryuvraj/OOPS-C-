#include<bits/stdc++.h>
using namespace std;

class Base{
    public:
    virtual ~Base()=0;
};
Base :: ~Base(){
    cout << "Pure Destructor (BASE)" << endl;
}

class Derived : public Base{
    public:
    ~Derived(){
        cout << "Destructor(Derived)" << endl;
    }
};
int main(){
    Base *b = new Derived();
    delete b;
    return 0;

}