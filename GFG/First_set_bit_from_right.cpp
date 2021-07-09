class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        bool flag=false;
        unsigned int mask=1; 
        int i=1,num=(int)log2(n)+1;
        for(i=1;i<=num;i++){
            if(mask&n){
                flag=true;
                break;
            }
            mask<<=1;
        }
        if(flag){
            return i;
        }
        return 0;
        // Your code here
    }
};