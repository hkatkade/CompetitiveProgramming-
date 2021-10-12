#include<bits/stdc++.h>
using namespace std;

class Base{
    public:
        int b;
        virtual void display(){
            cout << "Base class display\n";
        }
};
class derived:public Base{
    public:
        void display(){
            cout << "Derived class display\n";
        }
};

void func(Base *obj){
    obj->display();
}

int main(){
    func(new Base);
    func(new derived);
    return 0;
}