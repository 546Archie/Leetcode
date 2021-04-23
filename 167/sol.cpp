class Solution {
public:
    vector<int> twoSum(vector<int>& n, int target) {
        vector<int> ret;
        int len = n.size();
        int l, r;
        l = 0;r = len-1;
        while(l < r){
            if(n[l]+n[r]==target){
                ret.push_back(l+1);
                ret.push_back(r+1);
                return ret;
            }
            else if(n[l]+n[r]>target){
                r--;
            }
            else{
                l++;
            }
        }
        return ret;
    }
};
