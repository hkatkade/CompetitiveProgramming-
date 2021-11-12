class Solution {
public:
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), [&] (int &n1, int &n2) {
            string num1 = to_string(n1); 
            string num2 = to_string(n2);
            // Below is real beauty: xy > yx & yz > zy => xz > zx (x, y, z: +ve int)
            return num1 + num2 > num2 + num1;
        });
        string res = "";
        for (auto &num : nums)
            res += to_string(num);
        return res[0] == '0' ? "0" : res;
    }
};

class Solution {
public:
    static bool comp(int& a,int& b){
        string x=to_string(a);
        string y=to_string(b);
        return (x+y)>(y+x);
    }
    string largestNumber(vector<int>& a) {
        int n=a.size();
        sort(a.begin(),a.end(),comp);
        string res="";
        for(auto &i:a){
            res+=to_string(i);
        }
        return res[0]=='0'?"0":res;
    }
};

