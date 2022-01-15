class Solution {
public:
    bool detectCapitalUse(string word) {
        int up=0,low=0;
        for(auto &i:word){
            if(isupper(i)){
                up++;
            }
            else{
                low++;
            }
        }
        if(up==word.length() || (up==1 && isupper(word[0])) || low==word.length()){
            return true;
        }
        else{
            return false;
        }
    }
};