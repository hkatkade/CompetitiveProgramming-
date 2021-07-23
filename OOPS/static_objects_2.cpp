#include<bits/stdc++.h>
using namespace std;

class HumanBeing{
    public:
        int i;
        HumanBeing(){
            cout << "Constructor called\n";
        }
        ~HumanBeing(){
            cout << "Destructor called\n";
        }

};

int main(){
    int x = 0;
    if(x==0){
        static HumanBeing harsh;
    }
    // since harsh is a static object, its scope is throughout the lifetime of program,
    // thats why destructor is called at the end of main/program.
    cout << "End of main\n";
}