class Solution {
public:
    int numDifferentIntegers(string word) {
        int i,j,n;
        n=word.size();
        unordered_set<string>s;
        i=0;
        while(i<n){
            if(isdigit(word[i])==false){
                i++;
                continue;
            }
            string num="";
            while(i<n && isdigit(word[i])){
                num+=word[i];
                i++;
            }
            j=0;
            while(j<n && num[j]=='0') j++;
            num=num.substr(j);
            
            s.insert(num);
        }
        
        return s.size();
    }
};