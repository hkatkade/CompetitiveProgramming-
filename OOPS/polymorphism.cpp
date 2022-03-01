#include<bits/stdc++.h>
using namespace std;
// The word polymorphism means having many forms.
// In simple words, we can define polymorphism as the ability of a message to be displayed in more than one form



// Virtual functions ensure that the correct function is called for an object,
//  regardless of the type of reference (or pointer) used for function call.


// VTables are created for all the classes having atleast one virtual funtions
class person{
    public:
        virtual void introduce(){
            cout << "Hey from person\n";
        }
};

class student:public person{
    public:
        void introduce(){
            cout << "Hey from student\n";
        }
};

class farmer : public person{
    public:
        void introduce(){
            cout << "Hey from farmer\n";
        }
};

void whoisthis(person &p){
    p.introduce();
}

int main(){
    farmer harsh;
    student magnus;
    person *anish = new farmer();
    anish->introduce();
    whoisthis(harsh);
    whoisthis(magnus);
    return 0;
}

