#include<bits/stdc++.h>
using namespace std;
// Base class
class person{
    public:
        string name;
        int age;
        void setName(string s){
            name = s;
        }
        void setAge(int val){
            age = val;
        }
};
// subclass
// inherit public members of class person into student 
class student : public person{
    public:
        int id;
        void setID(int val){
            id = val;
        }
        void introduce(){
            cout << "I am " << name << " " << id << " " << age << endl;
        }
};

int main(){

    student harsh;
    harsh.setName("Harsh");
    harsh.setAge(21);
    harsh.setID(20);
    harsh.introduce();
    return 0;
}