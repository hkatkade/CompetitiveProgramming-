 #include<bits/stdc++.h>
using namespace std;

// destructor are called automatically when object is going to destroy/goes out of scope
// 1. funtions ends 2. program ends 3. a delete operator is called 4. a block containing local varirable ends
// default destructor is created by compiler if we failed to create one
// It works fine unless we have dynamically allocated memory or pointer in class
// when a class contains a pointer to memory allocated in class , we should write a destructor to release the
// memory before the class instance  is destroyed, to avoid memory leakage
// Cannot take any arguments, cannot return any values

class HumanBeing{
    public:
        HumanBeing(){
            cout << "Constructor called\n";
        }
        ~HumanBeing(){
            cout << "Destructor called\n";

        }
};

int main(){

    HumanBeing *harsh = new HumanBeing();
    // Destructor called
    delete harsh;
    // Destructor is not called 
    // free(harsh);
    return 0;
}
