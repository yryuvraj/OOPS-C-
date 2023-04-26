#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
    string name;
    Person(){
        cout << "Constructor called" << endl;
        cout << "What is your name : " << endl;
        cin >> name;
    }
    string display_data(){
        return name;

    }

};

class Employee : public Person{
    public:
    int salary;
    int year_join;
    Employee(){
        salary =0;
    }
    Employee(int s){
        salary = s;
    }
};


int main(){
    Employee e1(20000), e2(30000);
    cout << "Employee with greater salary is : " << endl;
    if(e1.salary > e2.salary){
        cout << e1.display_data() << endl;
    }
    else{
        cout << e2.display_data() << endl;
    }
    



}