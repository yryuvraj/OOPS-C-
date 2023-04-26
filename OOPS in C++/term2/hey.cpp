#include <iostream>
using namespace std;

class small_set{
public:
    bool num[31];
    small_set(){
        for(int i = 0;i<31;i++){
            num[i] = false;
        }
        }
    void setNum(int item){
        if(num[item] == true) throw "Item is already set";
        num[item] = true;
        }
    void clear(int item){
        if(num[item] == false) throw "Cannot clear item : Item is already clear";
        num[item] = false;
        }
    int test(int item){
        if(num[item]){
            return 1;
        }
        else{
            return 0;
        }
        }
    void display(){
        for(int i = 0;i<31;i++){
            if(num[i]!=0){
                cout << i << " : " << num[i] << endl;
            }
            else{
                continue;
            }
            
        }
        }
    };


int main(){
    try{
        small_set s1;
        s1.setNum(5);
        
        s1.setNum(2);
        
        s1.setNum(4);
        s1.clear(2);
        s1.display();
        }
    catch(const char *s){
        cout << s;
        return 0;
        }
    return 0;
    }