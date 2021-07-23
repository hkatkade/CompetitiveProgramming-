#include<bits/stdc++.h>
using namespace std;

// when a variable is declared as static, space for it gets allocated for the entire lifetime of the program
/* Even if the function is called multiple times, space for the static variable is allocated only once and the
   value of variable in the previous call gets carried through the next function call.*/

// static varaibles in class are shared by the objects
// Cannot be initialized by constructors as their cannot be multiple copies of same static variable

void display(){
    static int counter = 0;
    cout << "coutter is: " << counter << endl;
    counter++;
}
int main(){
    for (int i = 0; i < 5;i++){
        display();
    }
    return 0;
}