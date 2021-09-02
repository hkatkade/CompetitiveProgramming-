#include<bits/stdc++.h>
using namespace std;
void studentlist();

int main(){
    studentlist();
    return 0;
}

void studentlist(){
    class student{
        public:
            string name;
            int age;
            
            void display(){
                cout << name << " " << age << endl;
            }
    };

    student s1;
    s1.name = "Harsh";
    s1.age = 21;
    s1.display();
}