bool metaStrings (string S1, string S2){
    int c=0;
    if(S1.size()!=S2.size()){
        return false;
    }
    for(int i=0;i<S1.size();i++){
        if(S1[i]!=S2[i]){
            c++;
        }
        if(c>2){
            break;
        }
    }
    if(c==0){
        return false;
    }
    sort(S1.begin(),S1.end());
    sort(S2.begin(),S2.end());
    return S1==S2;
}