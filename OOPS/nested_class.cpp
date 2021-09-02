#include<bits/stdc++.h>
using namespace std;


class person{
    public:
        string name;

        // nested class
        class address{
            private:
                void check(){
                    cout << "Check\n";
                }

            public:
                string country, city;
                int n;
                void check2(){
                    cout << "check2\n";
                }
        };
        address ad;
        void display(){
            cout << name << endl;
            cout << ad.country << " " << ad.city << " " << ad.n << endl;
        }
};

int main(){
    // initialize object of nested class in main function
    person::address ad1;
    person harsh;
    harsh.name = "Harsh";
    harsh.ad.city = "X";
    harsh.ad.country="Y";
    harsh.ad.n = 1;
    harsh.display();
    harsh.ad.check2();
    return 0;
}