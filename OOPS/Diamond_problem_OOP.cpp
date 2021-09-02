#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
        Animal(){
            cout << "Animal constructor is called\n";
        }
        int age;
        void walk(){
            cout << "Animal walks\n";
        }
};

class tiger:virtual public Animal{
    public:
        tiger(){
            cout << "tiger constructor is called\n";
        }

};

class lion:virtual public Animal{
    public:
        lion(){
            cout << "lion constructor is called\n";
        }
};

class liger:public tiger,public lion{
    public:
        liger(){
            cout << "Liger constructor is called\n";
        }
};

int main(){
    liger l;
    l.walk();
    return 0;
}