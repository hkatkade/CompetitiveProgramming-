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
        HumanBeing harsh;
    }
    // since the scope of object harsh is only upto if block, the destructor is called as soon as the if ends 
    cout << "End of main\n";
}