#include<bits/stdc++.h>
using namespace std;

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
    // to access overridden methods of a base class
    harsh.person::introduce();
    return 0;
}