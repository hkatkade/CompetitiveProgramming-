#include<bits/stdc++.h>
using namespace std;

class HumanBeing{
    public: 
        string name;
        
        void introduce(){
            cout << "Hi I am " << name << endl;
        }
};

int main(){

    //initiating a object, stored in stack
    HumanBeing harsh;

    //initiating a object using new keyword, dyanmically, which will be stored in heap, will return a pointer
    // when we use new keyword, it returns address of the memory therefore we use pointers to store it 
    HumanBeing *magnus = new HumanBeing();

    harsh.name = "Harsh";
    harsh.introduce();

    // we use the arrow operator to access properties of a class
    magnus->name = "Magnus";
    magnus->introduce();

    return 0;
}