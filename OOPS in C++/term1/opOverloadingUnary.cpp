#include<iostream>
using namespace std;

class Weight{
    private:
        int kg;
    public:
        Weight(){
            kg = 0;

        }
        Weight(int x){
            kg = x;
        }
        void printWeight(){
            cout << "Weight is : " << kg << endl;
        }

        void operator ++ (){
            ++kg;
        }

        void operator ++ (int){
            kg++;
        }
};


int main(){
    Weight obj;
    obj.printWeight();
    ++obj;
    obj.printWeight();
    obj++;
    obj.printWeight();

    return 0;
}