class Solution {
public:
 int countSegments(string s) {
    if(s.size()==0){
        return 0;
    }
    int count=0,i=0;
    vector<string> v;
    for(int i=0;i<s.size();i++){
        string res="";
        while(i<s.size() && s[i]!= ' ')
        {
            res+=s[i];
            i++;
        }
        if(res!="")
        {
            v.push_back(res);
        }
        
    }
    return v.size();
    
}
};