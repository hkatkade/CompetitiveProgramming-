class Solution {
public:
    string largestOddNumber(string num) {
        string res="";
        int s=-1,e=-1;
        bool ok=true;
        for(int i=0;i<num.size();i++){
            if((num[i]-'0')%2==1){
                e=i;
            }
        }
        return e==-1?"":num.substr(0,e+1);
    }
};  