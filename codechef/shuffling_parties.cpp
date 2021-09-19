#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int n;
	    cin>>n;
	    vector<int> v;
	    for(int i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	        v.push_back(x);
	    }
	    int tmp=0,flag=0;
	    for(int i:v)
	    {
	        if(i%2==1)
	        {
	            flag+=1;
	         }
	         else 
	         {
	             tmp+=1;
	         }
	    }
	    int ans=min(flag,n/2)+min(tmp,(n+1)/2);
	    cout<<ans<<endl;
	}
	return 0;
}
