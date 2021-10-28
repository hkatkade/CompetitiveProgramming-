class Solution {
public:
    static int find_ones(int n){
        int res=0,mask=1;
        for(int i=0;i<log2(n)+1;i++){
            if(mask&n){
                res++;
            }
            mask=mask<<1;
        }
        return res;
    }
    static bool comp(const int& a,int& b){
        int x=find_ones(a),y=find_ones(b);
        if(x==y){
            return a<b;
        }
        return x<y;
    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),comp);
        return arr;
    }
};