#include<bits/stdc++.h>
using namespace std;

// every object in c++ has access to its own address through this pointer
// c++ implicitly passes the this reference to all the member funtions
// can be used when variable and class's data member name is same
class person{
    private:
        int age;
    public:
        void setAge(int age){
            this->age = age;
        }
        void showAge(){
            cout << "Age is " << this->age << endl;
        }
};

int main(){
    person harsh;
    harsh.setAge(20);
    harsh.showAge();
    return 0;
}