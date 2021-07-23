#include<bits/stdc++.h>
using namespace std;

class HumanBeing{
    public:
        static int human_count;

        HumanBeing(){
            human_count++;
        }
        void human_total(){
            cout << "Human count is: " << human_count << endl;
        }

        // static methods are going to have class scope 
        // we can only use static members of class in static methods
        static void humanCount(){
            cout << "Human count 2 is: " << human_count << endl;
        }

};

int HumanBeing::human_count = 0;

int main(){

    HumanBeing harsh;
    HumanBeing magnus;
    HumanBeing ronaldo;
    // to call the static method use ::
    HumanBeing::humanCount();
    cout << HumanBeing::human_total << endl;
    return 0;
}