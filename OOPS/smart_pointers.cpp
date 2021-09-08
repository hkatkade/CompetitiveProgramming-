#include<bits/stdc++.h>
using namespace std;

class SmartPtr{
    int* ptr;
    public:
        // constructor 
        explicit SmartPtr(int* p=NULL){
            ptr = p;
        }
        // destructor
        ~SmartPtr(){
            delete ptr;
        }
        int& operator*(){
            return *ptr;
        }
};
int main(){
    SmartPtr ptr(new int());
    *ptr = 20;
    cout << *ptr;
    return 0;
}