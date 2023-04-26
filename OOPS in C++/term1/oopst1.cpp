#include <iostream>
using namespace std;

class Distance{
  private:
    int meters;
  public:
    Distance(){
      meters = 0;
    }
    void displatData(){
      cout << "Meters value: " << meters;
    }
    //prototype or signature 
    friend void addValue(Distance &d);
};

void addValue(Distance &d){
  d.meters = d.meters + 5;

}


int main(){
  Distance d1; // creating object of the class defines
  d1.displatData(); // calling a normal function in the class
  addValue(d1); //friend funciton call 
  cout << endl;
  d1.displatData(); // calling the display function again after calling 
  // friend function which incremented the value meters


  return 0;
}