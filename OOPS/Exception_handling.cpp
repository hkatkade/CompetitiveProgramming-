#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=10,b=0,c=0;
    try{
        if(b==0)
            throw "Divide by zero error occured";
        c = a / b;
        cout << c << endl;
    }
    catch(const char *e){
        cout << "Exception occured " << e << endl;
    }
    return 0;
}