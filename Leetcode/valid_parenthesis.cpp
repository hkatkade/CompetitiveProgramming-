class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int n=s.length();
        for(auto &i:s){
            if(i=='(' || i=='{' || i=='['){
                st.push(i);
            }
            else if(st.empty()){
                return false;
            }
            else{
                char a=st.top();
                st.pop();
                if(i==')' && a!='('){
                    return false;
                }
                else if(i==']' && a!='['){
                    return false;
                }
                else if(i=='}' && a!='{'){
                    return false;
                }
                
            }
        }
        return st.empty();
        
    }
};