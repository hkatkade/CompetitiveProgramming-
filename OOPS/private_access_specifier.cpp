 #include<bits/stdc++.h>
using namespace std;

class HumanBeing{
    private:
        // cannot access outside the class
        int age;
        int getAge(){
            return age - 5;
        }
    public:
        void displayAge(){
            cout << "Age is: " << getAge() << "\n";
        }
        void setAge(int value){
            age = value;
        }

};

int main(){

    HumanBeing harsh;
    //using two public methods to access the private data member of a class
    harsh.setAge(21);
    harsh.displayAge();

    return 0;
}