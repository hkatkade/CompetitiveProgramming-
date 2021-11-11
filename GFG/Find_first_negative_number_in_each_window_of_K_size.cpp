vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int n, long long int k) {
    
    deque<long long> dq;
    long long i;
    for(i=0;i<k;i++){
        if(A[i]<0){
            dq.push_back(i);
        }
    }
    vector<long long> ans;
    for(;i<n;i++){
        if(!dq.empty()){
            ans.push_back(A[dq.front()]);
        }
        else{
            ans.push_back(0);
        }
        while(!dq.empty() && dq.front()<i-k+1){
            dq.pop_front();
        }
        if(A[i]<0){
            dq.push_back(i);
        }
    }
    if(!dq.empty()){
        ans.push_back(A[dq.front()]);
    }
    else{
        ans.push_back(0);
    }
    return ans;
 }