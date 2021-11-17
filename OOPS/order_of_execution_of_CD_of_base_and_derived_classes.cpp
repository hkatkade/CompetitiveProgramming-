#include<bits/stdc++.h>
using namespace std;

// the order of invokation is that the base class’s default
// constructor will be invoked first and then the derived class’s default constructor will be invoked.

class person{
    public:
        person(){
            cout << "Constructor of person is called\n";
        }
        ~person(){
            cout << "Destructor of person is called\n";
        }
};

// unlike constructors, destructors of derived classes are called first and then base class

class student : public person{
    public: 
        student(){
            cout << "Constructor of student is called\n";
        }
        ~student(){
            cout << "Destructor of student is called\n";
        }
};

int main(){

    student harsh;
    return 0;
}