#include<bits/stdc++.h>
using namespace std;

class HumanBeing{
    public:
        string name;
        // declaring a function inside a class
        void introduce();

};
//we can define a function of a class outside the class using scope resolution operator
void HumanBeing::introduce(){
    cout << "Hi I am " << HumanBeing::name << endl;
}

int main(){

    HumanBeing harsh;
    harsh.name = "Harsh";
    harsh.introduce();
    return 0;
}