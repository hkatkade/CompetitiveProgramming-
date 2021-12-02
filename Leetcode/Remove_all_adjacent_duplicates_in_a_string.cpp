class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        int n=s.size();
        for(int i=0;i<n;){
            if(!st.empty() && s[i]==st.top()){
                st.pop();
                i++;
            }
            else{
                st.push(s[i]);
                i++;
            }    
        }
        string res="";
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};

