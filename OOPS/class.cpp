#include<bits/stdc++.h>
using namespace std;

// How to access data members of a class 

class HumanBeing{
    public:
        string name;
        void introduce(){
            cout << "Hi my name is " << name;
        }
};

int main(){

    HumanBeing harsh;
    harsh.name = "Harsh";
    harsh.introduce();
    return 0;
}