#include<bits/stdc++.h>
using namespace std;

class student{
    string name;
    public:
        int age;
        student(){
            name = "NoName";
            age = 20;
        }
        student(int val,string s){
            this->name = s;
            this->age = val;
        }
        void display(){
            cout << "Name: " << name << endl;
            cout << "Age is: " << age << endl;
        }
        // size_t is inbuilt datatype that is capable of holding the largest memory that can allocated
        // contains numbers of bytes that we want to allocate
        void *operator new(size_t size){
            void *pointer;
            cout << "Using overloaded new operator\n";
            cout << "Size is: " << size << endl;
            pointer = malloc(size);
            if(!pointer){
                bad_alloc ba;
                throw ba;
            }
            return pointer;
        }
        void operator delete(void *pointer){
            cout << "Overloaded delete\n";
            free(pointer);
        }
};
int main(){
    student *s1;
    try{
        s1 = new student(20, "Harsh");
        s1->display();
        delete s1;
    }
    catch(bad_alloc ba){
        cout << ba.what() << endl;
    }
    return 0;
}