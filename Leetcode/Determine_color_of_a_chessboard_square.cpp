class Solution {
public:
    bool squareIsWhite(string c) {
        cout<<int(c[0]-'a'+1)<<" "<<int(c[1]-'0')<<endl;
        if(int(c[0]-'a'+1)%2==int(c[1]-'0')%2){
            return false;
        }
        return true;
    }
};