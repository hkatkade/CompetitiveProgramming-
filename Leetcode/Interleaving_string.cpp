class Solution{
  public:
    int dp[101][101];
  bool helper(string A,string B,string C,int n,int m,int len){
      if(len==0){
          return true;
      }
      if(dp[n][m]!=-1){
          return dp[n][m];
      }
      bool ok1=false,ok2=false;
      if(n-1>=0 && A[n-1]==C[len-1]){
          ok1=helper(A,B,C,n-1,m,len-1);
      }
      if(m-1>=0 && B[m-1]==C[len-1]){
          ok2=helper(A,B,C,n,m-1,len-1);
      }
      return dp[n][m]=ok1||ok2;
  }
    bool isInterleave(string A, string B, string C) {
        int n=A.size();
        int m=B.size();
        int len=C.size();
        if(n+m!=len){
            return false;
        }
        memset(dp,-1,sizeof(dp));
        return helper(A,B,C,n,m,len);
    }

};