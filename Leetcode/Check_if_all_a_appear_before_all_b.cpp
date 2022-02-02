class Solution {
public:
    bool checkString(string s) {
        string temp=s;
        sort(s.begin(),s.end());
        return s==temp;
    }
};