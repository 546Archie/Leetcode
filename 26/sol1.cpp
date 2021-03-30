ublic:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0 || nums.size()==1)
            return nums.size();
        auto i = nums.begin();
        int cur = *i;i++;
        while(i!=nums.end()){
            while(i != nums.end() && cur == *i){
                nums.erase(i);
            }
            cur = *i;
            if(i==nums.end())
                break;
            else
                i++;
        }
        return nums.size();
    }
};
