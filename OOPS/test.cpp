#include<bits/stdc++.h>
using namespace std;

class A{
    private:
        void* operator new(size_t sz){
        
        }
    public:
        static int x;

};

int A::x = 0;

int main(){

    A *ptr = new A;
    cout << A::x << endl;
    return 0;
}