
class Solution{
public:
    const int MOD = 1000000007;
    int countBits(int N, long long int A[]){
        long long int mask=1,ans=0; 
        for(int i=0;i<32;i++){
            long long int c=0;
            // cout<<mask<<endl;
            for(int j=0;j<N;j++){
                if(A[j]&mask){
                    c++;
                }
            }
            // cout<<c<<endl;
            mask=mask<<1;
            ans=(ans+c*(N-c)*2)%MOD;
        }
        return ans;
    }
};