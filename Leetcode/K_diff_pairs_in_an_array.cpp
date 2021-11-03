class Solution {
public:
    int findPairs(vector<int>& a, int k) {
        int n=a.size();
        sort(a.begin(),a.end());
        set<pair<int,int>> s;
        int low=0,high=n-1;
        for(int i=0;i<n;i++){
            low=i+1,high=n-1;
            int target=a[i]+k;
            while(low<=high){
                int mid=low+(high-low)/2;
                if(a[mid]==target){
                    s.insert({a[i],target});
                    break;
                }
                else if(target>a[mid]){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
        }
        return s.size();
    }
};