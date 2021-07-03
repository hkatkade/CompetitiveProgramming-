class Solution {
public:
    int evalRPN(vector<string>& t) {
        stack<int> st;
        int n=t.size();
        for(int i=0;i<n;i++){
            if(t[i]!="+" && t[i]!="*" && t[i]!="-" && t[i]!="/"){
                
                st.push(stoi(t[i]));
            }
            else{
                int num=0;
                int y=st.top();
                st.pop();
                int x=st.top();
                st.pop();
                if(t[i]=="+"){
                    num=x+y;
                }
                else if(t[i]=="*"){
                    num=x*y;
                }
                else if(t[i]=="/"){
                    num=x/y;
                }
                else if(t[i]=="-"){
                    num=x-y;
                }
                st.push(num);
            }
        }
        return st.top();
    }
};