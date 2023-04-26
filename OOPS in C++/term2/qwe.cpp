#include<iostream>
using namespace std;
void callFunction(int i)
{
if(i)
throw 1;
else
throw 0;
}
void callFunction(char *n)
{
try{
if(n)
throw "StringOK";
else
throw "StringError";
 }
catch(const char *name)
 {
cout<<"catch "<<name<<"\n";
 }
}
int main()
{
int i=1;
try
 {
callFunction("teststring");
callFunction(0);
if(i)
 {
throw "1";
 }
else
 {
throw "0";
 }
 }
catch(int i)
 {
cout<<"catch 1 "<<i<<"\n";
 }
catch(const char *name)
 {
cout<<"catch 2 "<<name<<"\n";

 }
 return 0;
}