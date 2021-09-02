#include<bits/stdc++.h>
using namespace std;

// [] array subscripting
// {} function calling 
// -> arrow operator

// To over load these objects they must be not static member functions. They also can't be friend functions.

class marks{
    int subjects[3];
    public:
        marks(int a,int b,int c){
            subjects[0] = a;
            subjects[1] = b;
            subjects[2] = c;
        }
        int operator[](int ind){
            return subjects[ind];
        }
};
int main(){

    marks m(2,5,6); 
    cout << m[1] << endl;
    return 0;
}