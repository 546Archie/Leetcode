lude <string.h>
class Solution {
    public:
            vector<string> findRelativeRanks(vector<int>& score) {
                vector<string> ans(score.size(), "");
                priority_queue<pair<int, int>> pq;
                //pair(score, index)
                for(int i = 0 ; i < score.size() ; i++){
                    pq.push(make_pair(score[i], i));
                }
                for(int i = 0 ; i < score.size() ; i++){
                    if(i==0)
                        ans[pq.top().second] = "Gold Medal";
                    else if(i==1)
                        ans[pq.top().second] = "Silver Medal";
                    else if(i==2)
                        ans[pq.top().second] = "Bronze Medal";
                    else
                        ans[pq.top().second] = to_string(i+1);
                    pq.pop();
                }
                return ans;
            }
};
