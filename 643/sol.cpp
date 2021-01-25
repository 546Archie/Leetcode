/*
 * leetcode Question 643
 */
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int len = nums.size();
        double sum = 0;
        double cur_max = 0;
        for(int i = 0 ; i < k ; i++)
            sum+=nums[i];
        cur_max = sum;
        for(int i = 1 ; i < len-k+1 ; i++){
            sum-=nums[i-1];
            sum+=nums[i+k-1];
            if(sum>cur_max)
                cur_max = sum;
        }
        return cur_max/k;
    }
};
