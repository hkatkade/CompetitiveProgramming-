#include<bits/stdc++.h>
using namespace std;

class marks{
    int mark;
    public:
        marks(int m){
            mark = m;
        }
        void display(){
            cout << "Marks are: " << mark << "\n";
        }
        // -> is a unary function
        marks *operator->(){
            return this;
        }
        
};
int main(){

    marks m(65);
    m.display();
    m->display();
    return 0;
}