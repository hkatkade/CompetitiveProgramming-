 #include<bits/stdc++.h>
using namespace std;

// constructor are methods/funtions which does not have return type
// Have same name as a class
// They are called when you create an object of a class
// Uses : initialize property of class when onject created 
class HumanBeing{
    private:
        string name;
        int age;

    public:
        //  constructor
        // Default constructor
        HumanBeing(){
            name = "Default";
            age = 0;

            cout << "Constructor is called when you create object of a class\n";
        }
        void display(){
            cout << "Name and age is: " << name << " " << age << endl;
        }

};

int main(){

    HumanBeing harsh;
    harsh.display();

    return 0;
}