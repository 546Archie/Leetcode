#include <algorithm>

class Solution {
public:
    void merge(vector<int>& n1, int m, vector<int>& n2, int n) {
        int l = m+n;
        for(int i = l-n, j = 0 ; i < l, j < n; i++, j++){
            n1[i] = n2[j];
        }
        sort(n1.begin(), n1.end());
};
