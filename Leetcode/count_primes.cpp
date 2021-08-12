class Solution {
public:
    int countPrimes(int n) {
        set<int> s;
        vector<bool> prime(n+1,true);
        prime[0]=false;
        prime[1]=false;
        for(int i=2;i*i<=n;i++){
            if(prime[i]==true){
                for(int j=i*i;j<=n;j+=i){
                    prime[j]=false;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(prime[i]){
                s.insert(i);
            }
        }
        return s.size();
    }
};