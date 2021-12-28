class Solution {
public:
    bool isPathCrossing(string p) {
        int x=0,y=0;
        unordered_map<string,int> m;
        string a=to_string(x)+to_string(y);
        m[a]++;
        for(auto &i:p){
            if(i=='N')
                y++;
            else if(i=='S')
                y--;
            else if(i=='E')
                x++;
            else
                x--;
            string a=to_string(x)+to_string(y);
            if(m[a]>0){
                return true;
            }
            m[a]++;
        }
        return false;
    }
};