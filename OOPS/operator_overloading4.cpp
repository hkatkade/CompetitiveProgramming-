#include<bits/stdc++.h>
using namespace std;
class Marks{
    int mark;
    public:
        Marks(){
            mark = 0;
        }
        Marks(int a){
            mark = a;
        }
        void display(){
            cout << "Marks are: " << mark << "\n";
        }
        void operator+=(int val){
            mark = mark + val;
        }
        // When a operator funtion is a member funtion, the current object is passed implicitly
        // ------ is friend funtion, their will be no this pointer, hence current object is not passed implicitly
        friend void operator-=(Marks &m, int val);
};
void operator-=(Marks &m, int val){
    m.mark -= val;
}
int main(){
    Marks m(50);
    m.display();
    m += 70;
    m.display();
    return 0;
}


