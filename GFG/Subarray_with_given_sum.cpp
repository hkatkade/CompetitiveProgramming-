class Solution
{
    public:
   vector<int> subarraySum(int a[], int n, long long s)
   {
       int sum=0,i=0,j=0;
    while((i<n) && (j<=n)){
           if(sum<s){
             sum+=a[j];
             j++;
         }
         else if(sum>s){
             sum-=a[i];
             i++;
         }
         else if(sum==s){
         return {i+1,j};
         break;
         }
    } 
    return {-1};
   }
};