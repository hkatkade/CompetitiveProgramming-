#include<bits/stdc++.h>
using namespace std;

class HumanBeing{
    public:
        // static variable is shared by all the objects of this class
        // cannot initialize static variable inside the class
        static int human_count;

        HumanBeing(){
            human_count++;
        }
        void human_total(){
            cout << "Human count is: " << human_count << endl;
        }

};

int HumanBeing::human_count = 0;

int main(){

    // since human_count has class scope, we can access this without creating its objects
    cout << HumanBeing::human_count << endl;
    HumanBeing harsh;
    HumanBeing magnus;
    HumanBeing ronaldo;
    harsh.human_total();
    cout << HumanBeing::human_count << endl;
    return 0;
}