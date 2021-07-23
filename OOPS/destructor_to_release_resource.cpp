 #include<bits/stdc++.h>
using namespace std;

class HumanBeing{
    private:
        string *name;
        int *age;
    public:
        HumanBeing(string s,int val){
            // allocated the memory dynamically to store values
            name = new string;
            age = new int;

            *name = s;
            *age = val;
        }
        void display(){
            cout << "Hi I am " << *name << " "<< " and age is " << *age << endl;
        }
        ~HumanBeing(){
            cout << "Destructor called\n";
            delete name;
            delete age;
        }
};

int main(){

    HumanBeing *harsh = new HumanBeing("Harsh", 20);
    harsh->display();
    delete harsh;
    return 0;
}
