#include<bits/stdc++.h>
using namespace std;

class my1{
    friend class my2;   // my2 is a friend of my1 --> which implies that my2 can 
                        //access shit from my1 and not vice versa
    private:
        int x;
    public:
        my1(int a){
        x=a;
        }
};

class my2{
    public:
    void showData(my1 obj){
        cout << "x value is =" << obj.x << endl;
    }

};

int main(){
    my1 obj(5+8);
    my2 obj2;
    obj2.showData(obj);
}