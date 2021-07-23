 #include<bits/stdc++.h>
using namespace std;

class HumanBeing{
    private:
        int age;
        string name;
    public:
        // default constructor
        HumanBeing(){
            cout << "Default constructor\n";
            age = 0;
            name = "NoName";
        }
        //Parameterized constructor
        HumanBeing(string s){
            cout << "Parameterized constructor\n";
            age = 0;
            name = s;
        }
        // 2nd Parameterized constructor
        HumanBeing(int val,string s){
            cout << "second Parameterized constructor\n";
            age = val;
            name = s;
        }
        void display(){
            cout << name << " " << age << endl;
        }

};

int main(){

    HumanBeing harsh;
    harsh.display();
    HumanBeing magnus("Magnus");
    magnus.display();
    HumanBeing ronaldo(33, "Ronaldo");
    ronaldo.display();
    return 0;
}
