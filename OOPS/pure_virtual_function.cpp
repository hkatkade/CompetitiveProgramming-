#include<bits/stdc++.h>
using namespace std;

// abstract class is class with atleast one pure virtual function
/*Suppose we have a pure virtual function in a base class, hence every derived class from the base 
  should override the pure virtual function of the base class, if they failed to do so, error will be 
  generated.*/

// We cannot create objects of a abstract class

class A{
    public:
        virtual void display()=0; // Pure virtual function 
};

// Defining pure virtual funtion from a base class itself

void A::display(){
    cout << "Display from A::\n";
}

class B:public A{
    public:
        void display(){
            cout << "Display from B is called\n";
            A::display();
        }
};
class C:public A{
    public:
        void x(){

        }
        void display(){
            cout << "Hello from C\n";
        }

};
int main(){
    A *obj = new B();
    obj->display();
    B obj1;
    obj1.display();
    // B obj1;
    return 0;
}