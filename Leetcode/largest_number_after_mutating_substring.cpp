class Solution {
public:
    string maximumNumber(string num, vector<int>& change) {
        int n=num.length();
        int i=0;
        while(i<n && num[i]>=change[num[i]-'0']+'0'){
            i++;
        }
        while(i<n && num[i]<=change[num[i]-'0']+'0'){
            num[i]=change[num[i]-'0']+'0';
            i++;
        }
        return num;
    }
};