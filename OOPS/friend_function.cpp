#include<bits/stdc++.h>
using namespace std;

// By default access specifier is private

class HumanBeing{
    private:
        string name;
        int age;

    public:
    HumanBeing(string s,int val){
        name = s;
        age = val;
    }
        void tellme(){
            cout << name << " " << age << endl;
        }

    // declaring a friend function
    friend void display(HumanBeing man);
    // another friend class to this class
    // All member functions of that class can access the private and protected members of the class it is friend of
    friend class dog;
};
class dog{
    public:
        void dogfriend(HumanBeing& man){
            cout << "I am dog of " << man.name << endl;
        }
};
// A friend function of a class is used to access private and protected members of a class
// A friend function can be a member function of another class or a global function
// Java doesn't support friend function or class
// Parameters of a friend funtion is object of class it is friend of

void display(HumanBeing man){
    cout << "friend function: "<< man.name << " " << man.age << endl;
}


int main(){

    HumanBeing harsh("Harsh",21);
    dog lab;
    lab.dogfriend(harsh);
    return 0;
}