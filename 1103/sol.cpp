class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> ret(num_people, 0);
        int current = 1, app = 0, index = 0;
        while(candies - app > 0){
            if(current > candies-app)
                ret[index%num_people] += candies-app;
            else
                ret[index%num_people] += current;
            app+=current;
            current++;
            index++;
        }
        return ret;
    }
};
