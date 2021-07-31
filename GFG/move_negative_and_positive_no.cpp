#include<bits/stdc++.h>
using namespace std;
void sortNumbers(vector<int>& a){
    int n=a.size();
    int l = 0, h = n - 1;
    while(l<=h){
        if(a[l]>0 && a[h]<0){
            swap(a[l], a[h]);
            l++;
            h--;
        }
        else if(a[l]<0 && a[h]<0){
            l++;
        }
        else if(a[l]<0 && a[h]>0){
            l++;
            h--;
        }
        else if(a[l]>0 && a[h]>0){
            h--;
        }
    }
}
int main(){
    int n;
    cin >> n;
    vector<int> a(n, 0);
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    sortNumbers(a);
    for(auto &i:a){
        cout << i << " ";
    }
    return 0;
}