class Solution {
public:
    vector<int> plusOne(vector<int>& d) {
        vector<int> ret;
        int len = d.size()-1;
        int carry = 0;
        int sum = 0;
        d[len] = d[len]+1;
        if(d[len]>=10){
            carry = 1;
            d[len] -= 10;
        }
        int i = len-1;
        ret.push_back(d[len]);
        while(i >= 0){
            d[i] = d[i]+carry;
            if(d[i]>=10){
                carry = 1;
                d[i]-=10;
            }
            else
                carry = 0;
            ret.push_back(d[i]);
            i--;
        }
        if(carry)
            ret.push_back(1);
        reverse(ret.begin(), ret.end());
        return ret;
    }
};
