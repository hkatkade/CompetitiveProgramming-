#include<bits/stdc++.h>
using namespace std;

class A{
    public:
        int val;
        A(int n){
            val = n;
        }
        void display(){
            cout << "X is: " << val << endl;
        }
        // prefix ++a
        friend void operator++(A &obj);
        A operator--(){
            val -= 1;
            return *this;
        }
};
void operator++(A &obj){
    obj.val++;
}

int main(){
    A obj(10);
    obj.display();
    ++obj;
    obj.display();
    --obj;
    obj.display();
    return 0;
}