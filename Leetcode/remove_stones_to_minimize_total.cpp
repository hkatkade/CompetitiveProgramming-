class Solution {
public:
    int minStoneSum(vector<int>& p, int k) {
        int n=p.size();
        if(n==0){
            return 0;
        }
        priority_queue<int> pq(p.begin(),p.end());
        while(k--){
            int top=pq.top();
            pq.pop();
            if(top%2)
                pq.push((top/2)+1);
            else
                pq.push(top/2);
        }
        int ans=0;
        while(!pq.empty()){
            ans+=pq.top();
            pq.pop();
        }
        return ans;
    }
};
Time flies people say, but somethings made me realize that it really does. One of those things is our friendship. It's been almost 4 years since we've become, yet it feels like yesterday. You are one of those people in my life with whom it doesn't matter whether we are in touch or not but every time we talk, it feels like a talking to a close, lovely friend. I miss those long walks from college to station, I miss you annoying us in library, I miss you capturing all the sweet memories. I wish to relive these moments again and again. Although you annoy me but our mutual love for Real Madrid makes you tolerable :'').
Jokes aside, you are now 21!! A whole new chapter of your life is about to begin