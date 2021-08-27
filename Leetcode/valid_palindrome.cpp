class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.length();
        if(n<=1){
            return true;
        }
        int start=0,end=n-1;
        while(start<end){
            if(!isalnum(s[start])){
                start++;
                continue;
            }
            if(!isalnum(s[end])){
                end--;
                continue;
            }
            if(tolower(s[start])!=tolower(s[end])){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};