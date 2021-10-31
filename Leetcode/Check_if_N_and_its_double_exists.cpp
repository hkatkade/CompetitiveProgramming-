class Solution {
public:

bool binarySearch(vector<int>& arr,int val)
{
    int hi = arr.size() -1 ;
    int lo = 0 ;
    while(hi >= lo)
    {
        int mid = lo + (hi-lo)/2 ;
        // cout << arr[lo] << " " << arr[mid] << " " << arr[hi] << endl ;
        if(arr[mid] == val) return true ;
        else if(arr[mid] > val) hi = mid - 1 ;
        else lo = mid + 1 ;
    }
    
    return false ;
    
}

bool checkIfExist(vector<int>& arr) {
    
    sort(arr.begin(),arr.end()) ;
    
    int zeros = 0 ;
    
    for(auto x:arr)
        if(x == 0)
            zeros++ ;
    
    if(zeros >= 2) return true ; 
            
    for(int i=0;i < arr.size() ;i++)
    {
        if(arr[i] == 0 ) continue ;
        if(binarySearch(arr,2*arr[i])) 
            return true ;
    }
        
    return false ;
    
}
};