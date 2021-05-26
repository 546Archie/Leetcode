class Solution {

public:

    int findLatestStep(vector<int>& arr, int m){

        int rst = -1;

        int len = arr.size();

        vector<int> pattern(len+5, 0);

        vector<int> cnt(len+5, 0);

        for(int i = 0 ; i < len ; i++){

            int idx = arr[i];

            int left_val = pattern[idx-1];

            int right_val = pattern[idx+1];

            pattern[idx] = pattern[idx-left_val]=pattern[idx+right_val] = left_val+right_val+1;

            cnt[left_val]--;

            cnt[right_val]--;

            cnt[pattern[idx]]++;

            if(cnt[m])

                rst = i+1;

        }

        return rst;

    }

};
