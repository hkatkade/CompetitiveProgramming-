#include<bits/stdc++.h>
using namespace std;
void increment(int &a){
    a++;
}
void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int a=10;
    int *ptr = &a;
    // cout << &a << endl; // #89123
    // cout << ptr << endl; // #89123
    // cout << *ptr << endl; // 10 (dereferencing)
    // ptr++;
    // cout << ptr << endl;

// pointers as arrays
    int b[] = {1, 2, 3, 4, 5};
    // cout << b;

    // pointer to pointer

    // int **q = &ptr;
    // cout << **q << endl;

// passing pointers to funtions

    // cout << a << endl;
    // increment(a);
    // cout << a << endl;

    int p = 10, q = 20;
    int *pptr = &p;
    int *qptr = &q;
    swap(*pptr, *qptr);
    cout << p << " " << q << endl;
    return 0;
}