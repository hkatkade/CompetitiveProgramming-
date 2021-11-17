#include<bits/stdc++.h>
using namespace std;


// deriving a child class from multiple parent classes
class Father{
    public:
        int height;
        void askFather(){
            cout << "Ask your father\n";
        }
        virtual void askMother(){
            cout << "asdhkjkasdMother's name is \n";
        }
};
class Mother{
    public:
        string name;
        void askMother(){
            cout << "Mother's name is \n";
        }
};

class child:public Mother,public Father{
    public:
        void askchild(){
            cout << "Asking as a child\n";
        }
        void setNameandheight(string s,int val){
            height = val;
            name = s;
        }
        void display(){
            cout << "Height is: " << height << " and name is: " << name << endl;
        }
};

int main(){
    child harsh;
    harsh.setNameandheight("Veena", 160);
    harsh.askFather();
    harsh.askMother();
    harsh.display();
    return 0;
}