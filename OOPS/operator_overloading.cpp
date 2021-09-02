#include<bits/stdc++.h>
using namespace std;

class Complex{
    private:
        int real, imag;
    public:
        Complex(int i=0,int j=0){
            real = i;
            imag = j;
        }
        // operator overloading
        Complex operator + (Complex obj){
            Complex res;
            res.real = real + obj.real;
            res.imag = imag + obj.imag;
            return res;
        }
        void display(){
            cout << real << " + i" << imag << endl;
        }
};

int main(){

    Complex c1(10, 5), c2(8, 7),c4(1,1);
    Complex c3 = c1 + c2 + c4;
    c3.display();
    return 0;
}