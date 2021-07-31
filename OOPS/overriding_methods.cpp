#include<bits/stdc++.h>
using namespace std;

// both base and derived class will have same funtions
// hence when function is called by the object of derived class, method in base class is overridden

class person{
    public:
        void introduce(){
            cout << "Hi I am a person " << endl;
        }
};

class student : public person{
    public:
        void introduce(){
            cout << "Hi I am a student " << endl;
        }
};

int main(){
    student harsh;
    harsh.introduce();
    return 0;
}