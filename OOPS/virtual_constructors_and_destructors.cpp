#include<bits/stdc++.h>
using namespace std;

// destructors has to be made virtual in order to be called 
// virtual constructors does not exist

class base{
    public:
        base(){
            cout << "Base class constructor\n";
        }
        virtual ~base(){
            cout << "Base class destructor\n";
        }
};
class derived:public base{
    public:
        derived(){
            cout << "Derived class constructor\n";
        }
        ~derived(){
            cout << "Derived class destructor\n";
        }
};
int main(){
    base *obj = new derived();
    delete obj;
    return 0;
}