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
class student : private person{
    public:
        // make name member public using access declaration to make name public is class student
        // using person :: name;  // (NO WARNINGS)
        person ::name;
        person ::setName;
        void display(){
            cout <<"I am "<< name << endl;
        }
        void studentsetName(string s){
            setName(s);
        }
};
int main(){
    
    student harsh;
    harsh.name = "Harsh";
    harsh.display();
    return 0;
}