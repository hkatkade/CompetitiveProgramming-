#include<bits/stdc++.h>
using namespace std;

class person{
    public:
        void walk(int steps=7){
            cout << "walking " << steps << endl;
        }
        void walk(int steps){
            cout << "walking " << steps << endl;
        }
};
int main(){

    person harsh;
    // harsh.walk();
    harsh.walk(5);
    return 0;

}