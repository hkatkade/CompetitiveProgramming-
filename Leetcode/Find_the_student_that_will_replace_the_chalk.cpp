class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long int sum=0;
        for(int i=0;i<chalk.size();i++){
            sum+=chalk[i];
        }
        sum=k-sum*(k/sum);
        long long int ans=0;
        for(int i=0;i<chalk.size();i++){
            if(sum-chalk[i]<0){
                ans=i;
                break;
            }
            sum-=chalk[i];
        }
        return ans;
    }
};