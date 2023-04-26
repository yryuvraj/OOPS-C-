#include<iostream>
using namespace std;

int add(int a){
    return a;
}

double add(double a, double b){
    return a+b;
}

int add(int a, int b, int c){
    return a + b + c;
}

int main(){
    
    cout << add(5);
    return 0;
}