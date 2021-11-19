class Solution {
public:
    string maximumBinaryString(string s) {
        int n=s.size(),ind=0;
        bool firstFound=false;
        for(int i=0;i<n;i++){
            if(s[i]=='0' && !firstFound){
                firstFound=true;
                ind=i;
                break;
            }
        }
        int z=0,o=0;
        for(int i=ind;i<n;i++){
            if(s[i]=='0'){
                z++;
            }
            else{
                o++;
            }
        }
        if(z==0){
            return s;
        }
        string res="";
        for(int i=0;i<ind;i++){
            res+='1';
        }
        for(int i=0;i<z-1;i++){
            res+='1';
        }
        res+='0';
        for(int i=0;i<o;i++){
            res+='1';
        }
        return res;
    }
};