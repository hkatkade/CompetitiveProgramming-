#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    // cout << "start\n";
    string s,t;
    cin >> s >> t;
    int n=s.length();
  	int m=t.length();
    int res = s.compare(t);
    if(res<0){
        cout << "Yes\n";
    }
    else{
        cout << "No\n";
    }
    return 0;
}