class Solution{
  public:
    /*you are required to complete this method*/
    int convertFive(int n)
    {
        int k=1,sum=0,temp=n;
        while(n>0){
            int dig=n%10;
            if(dig==0){
                sum+=k*5;
            }
            k*=10;
            n=n/10;
        }
        return temp+sum;
    //Your code here
    }
};
