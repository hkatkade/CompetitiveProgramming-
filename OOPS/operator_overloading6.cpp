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
        // postfix a++
        A operator++(int){
            A duplicate(*this);
            val+=1;
            return duplicate;
        }
};

int main(){
    A obj(10);
    obj.display();
    obj++;
    obj.display();
    return 0;
}