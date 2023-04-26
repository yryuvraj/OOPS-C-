#include<bits/stdc++.h>
using namespace std;

class Complex{
    private:
        int real, img;
    public:
        Complex(int r=0, int i=0){
            real = r;
            img = i;
        }
        void print(){
            cout << real << " + " << img << "i" << endl;
        }

        Complex operator +(Complex c){
            Complex temp;
            temp.real = real + c.real;
            temp.img = img + c.img;
            return temp;

        }

        Complex operator -(Complex c){
            Complex temp;
            temp.real = real - c.real;
            temp.img = img - c.img;
            return temp;
        }
};

int main(){
    Complex c1(2,3);
    Complex c2(2,4);
    Complex c3;
    Complex c4;
    c3 = c1+c2; // c2 = c1.add(c2)
    //c3 = c1 +c2 +c4; // the associativity is from right to left  <---------
    c4 = c3 - c1;
    c4 = c4 - c3;
    c3.print();
    c4.print();

}