class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_map<char,int> m;
        m['a']=1;
        m['e']=1;
        m['i']=1;
        m['o']=1;
        m['u']=1;
        int c=0;
        for(int i=0;i<k;i++){
            if(m.find(s[i])!=m.end()){
                c++;
            }
        }
        int n=s.size();
        int i=0,j=k-1,ans=c;
        while(i<n && j<n){
            if(m.find(s[i])!=m.end()){
                c--;
            }
            i++;
            j++;
            if(m.find(s[j])!=m.end()){
                c++;
            }
            ans=max(ans,c);
            int len=j-i;
        }
        return ans;
    }
};