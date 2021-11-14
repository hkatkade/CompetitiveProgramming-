class Solution {
public:
    string simplifyPath(string path) {
        int n=path.size();
        stack<string> st;
        for(int i=0;i<n;){
            string temp;
            while(path[i]=='/' && i<n){
                i++;
            }
            while(path[i]!='/' && i<n){
                temp+=path[i];
                i++;
            }
            if(temp==".." && !st.empty()){
                st.pop();
            }
            else if(temp=="." || temp==""){
                continue;
            }
            else if(temp!=".."){
                st.push(temp);
            }
        }
        string res="";
        while(!st.empty()){
            res='/'+st.top()+res;
            st.pop();
        }
        return res.empty()?"/":res;
    }
};









// class Solution {
// public:
//     string simplifyPath(string path) {
//         string res="";
//         stack<string> st;
//         int n=path.size();
//         for(int i=0;i<n;){
//             string temp="";
//             int c=0;
//             if(isalpha(path[i])){
//                 while(isalpha(path[i]) && i<n){
//                     temp+=path[i];
//                     i++;
//                 }
//                 st.push(temp);
//             }
//             else if(path[i]=='/'){
//                 string temp3="";
//                 temp3+=path[i];
//                 st.push(temp3);
//                 while(path[i]=='/' && i<n){
//                     i++;
//                 }
//             }
//             else if(path[i]=='.'){
//                 string temp2="";
//                 while(path[i]=='.' && i<n){
//                     temp2+=path[i];
//                     i++;
//                     c++;
//                 }
//                 if(c==1){
//                     if(!st.empty()){
//                         // cout<<"c==1 :"<<st.top()<<endl;
//                         st.pop();
//                     }
//                 }
//                 else if(c==2){
//                     if(st.size()>2){
//                         st.pop();
//                         st.pop();
//                         st.pop();
//                     }
//                 }
//                 else{
//                     st.push(temp2);
//                 }
//             }
//             else{
//                 i++;
//             }
//             stack<string> t=st;
//             vector<string> ans;
//             string resss="";
//             if(!t.empty() && t.top()=="/"){
//                 t.pop();
//             }
//             while(!t.empty()){
//                 ans.push_back(t.top());
//                 t.pop();
//             }
//             reverse(ans.begin(),ans.end());
//             for(auto &i:ans){
//                 resss+=i;
//             }    
//             cout<<resss<<endl;
//         }
//         vector<string> ans;
        
// //         if(!st.empty() && st.top()=="/"){
// //             st.pop();
// //         }
//         while(st.size()>1 && st.top()==){
//             st.pop();
//         }
//         while(!st.empty()){
//             ans.push_back(st.top());
//             st.pop();
//         }
//         reverse(ans.begin(),ans.end());
//         for(auto &i:ans){
//             res+=i;
//         }
//         return res;
//     }
// };