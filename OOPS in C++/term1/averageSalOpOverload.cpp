#include<bits/stdc++.h>
using namespace std;

class Avg{
    private:
    float salary;
    public:
    Avg(float sal=0){
        salary = sal;
    }
    void print(){
        cout << "Salary is: " << salary << endl;
    }

    Avg operator +(Avg c){
            Avg temp;
            temp.salary = (salary + c.salary)/2;
            return temp;

        }

};

int main(){
    Avg c1(2);
    Avg c2(3);
    Avg c3;
    c3 = c1+c2; // c2 = c1.add(c2)
    //c3 = c1 +c2 +c4; // the associativity is from right to left  <---------
    c3.print();
    

}