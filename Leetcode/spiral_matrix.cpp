class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& a) {
        int m=a.size(),n=a[0].size();
        int top=0,down=m-1,left=0,right=n-1;
        vector<int> ans;
        int dir=0;
        while(top<=down && left<=right){
            if(dir==0){
                for(int i=left;i<=right;i++){
                    ans.push_back(a[top][i]);
                }
                top++;
            }
            else if(dir==1){
                for(int i=top;i<=down;i++){
                    ans.push_back(a[i][right]);
                }
                right--;
            }
            else if(dir==2){
                for(int i=right;i>=left;i--){
                    ans.push_back(a[down][i]);
                }
                down--;
            }
            else if(dir==3){
                for(int i=down;i>=top;i--){
                    ans.push_back(a[i][left]);
                }
                left++;
            }
            dir=(dir+1)%4;
        }
        return ans;
    }
};