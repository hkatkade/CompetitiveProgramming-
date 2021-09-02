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

        marks operator()(int mk){
            cout << "operator function\n";
            mark = mk;
            return *this;
        }
};
int main(){

    marks m(243);
    m.display();
    m(44);

    return 0;
}