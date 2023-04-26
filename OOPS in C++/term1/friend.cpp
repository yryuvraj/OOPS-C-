#include<bits/stdc++.h>
using namespace std;

class Distance{
    private:
        int mtr;
    public:
        Distance(){
            mtr=0;
        }
        void displayData(){
            cout << "Meters value = " << mtr << endl;
        }

        //prototype or signature
        friend void addData(Distance &d);
};


void addData(Distance &d){
    d.mtr = d.mtr+5;
    
}

int main(){
    Distance d1;
    d1.displayData();
    //pass by reference.. the friend function call..
    addData(d1);
    d1.displayData();

}