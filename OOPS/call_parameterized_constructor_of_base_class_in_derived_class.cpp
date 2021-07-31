#include<bits/stdc++.h>
using namespace std;

class parent{
    protected:
        int age;
    public:
        parent(int val){
            cout << "Parent class constructor is called\n";
            age = val;
        }
};
class child:public parent{
    public:
        // compiler will pass x to the base class constructor 
        child(int x):parent(x){
            cout << "Derived class constructor is called\n";
        }
        void display(){
            cout << "Age is " << age << endl;
        }
};

int main(){
    child harsh(21);
    harsh.display();
    return 0;
}