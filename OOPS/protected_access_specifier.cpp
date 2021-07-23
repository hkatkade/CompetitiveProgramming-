#include<bits/stdc++.h>
using namespace std;

class person{
    protected:
        string name;
    public:
        void setName(string s){
            name = s;
        }
};
class student:public person{
    public:
        void display(){
            cout << "I am " << name << endl;
        }
};
int main(){
    student harsh;
    harsh.setName("Harsh");
    harsh.display();

    return 0;
}