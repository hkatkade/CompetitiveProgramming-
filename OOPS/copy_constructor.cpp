#include<bits/stdc++.h>
using namespace std;

class student{
    public:
        string *name;
        int age;
        student(string name, int val){
            this->name = new string(name);
            this->age = val;
        }
        // Copy constructor. It is called when a object is copied. eg.line 29
        student(const student &s){
            cout << "Copy constructor is called\n";
            name = new string(*s.name);
            age = s.age;    
        }
        void change(string name, int val){
            *(this->name) = name;
            this->age = val;
        }
        void display(){
            cout << "Name and age: " << *name << " " << age << endl;
        }
};
int main(){
    student s1("Harsh", 20);
    s1.display();
    student s2 = s1;
    s2.display();
    s1.change("katkade",30);
    s1.display(); 
    s2.display();

    return 0;
}