#include<bits/stdc++.h>
using namespace std;
//Exception Handling 
// TRY, CATCH,THROW

int main(){
    int numerator, denominator, result; 
    cout << "Enter two numbers : " << endl;
    cin >> numerator >> denominator;
    try{
        if(denominator==0){
            throw denominator;
        }
        
        result = numerator/denominator;
    }
    catch(int ex){
        cout << "Divide by zero is not allowed" << endl;
    }
    cout << "Division is: " << result;
}