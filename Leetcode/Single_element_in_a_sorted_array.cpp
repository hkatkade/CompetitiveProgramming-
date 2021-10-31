class Solution {
public:
    int singleNonDuplicate(vector<int>& a) {
        int n=a.size();
        if(n==1){
            return a[0];
        }
        else if(a[0]!=a[1]){
            return a[0];
        }
        else if(a[n-1]!=a[n-2]){
            return a[n-1];
        }
        int low=0,high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(a[mid]!=a[mid+1] && a[mid]!=a[mid-1]){
                return a[mid];
            }
            else if(a[mid]==a[mid-1]){
                if((mid-low+1)%2==0){
                    low=mid+1;
                }
                else{
                    high=mid-2;
                }
            }
            else if(a[mid]==a[mid+1]){
                if((high-mid+1)%2==0){
                    high=mid-1;
                }
                else{
                    low=mid+2;
                }
            }
        }
        return -1;
    }
};