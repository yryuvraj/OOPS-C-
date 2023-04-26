#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Hero {    
    //properties
    public:
    char name[100];
    int health;
    char level;

};

//   sizeof(class{object}) == the summation of the sizes of the properties of the class
/*  
    sizeof(class{empty} or emptyClass) == 1 byte {just to keep its identification} == ki bhai kuch aise 
    class ka exist karta hai 
*/

/*
 class ko dusre file mein create karke #include<file_name.cpp> karne ke baad, we can use the class created in 
 another file in our current file
*/

/*
    Access Modifiers ::
    1) Public ->
    2) Private ->
    3) Protected ->

    by defult it is 2)Private 

*/
// learn about getter and setter from code help again 



int main(){
    Hero h1;
    //h1.name = "Yuvraj";
    //cout << h1.name;

    return 0;
}