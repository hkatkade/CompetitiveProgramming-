#include<bits/stdc++.h>
using namespace std;
class Marks{
    int intmarks, extmarks;
    public:
        Marks(){
            intmarks = 0;
            extmarks = 0;
        }
        Marks(int a,int b){
            intmarks = a;
            extmarks = b;
        }   
        void display(){
            cout << intmarks << " " << extmarks << "\n";
        }
        Marks operator +(Marks m){
            Marks temp
            temp.intmarks = intmarks + m.intmarks;
            temp.extmarks = extmarks + m.extmarks;
            return temp;
        }
};
int main(){

    Marks m1(10,20), m2(30,40);
    Marks m3 = m1 + m2;
    m3.display();
    return 0;
}