class Solution {
public:
    void merge(vector<int>& n1, int m, vector<int>& n2, int n) {
        int l = m+n-1;
        int i = m-1;
        int j = n-1;
        while(i >=0 && j >=0){
            if(n1[i] > n2[j]){
                n1[l--] = n1[i--];
            }
            else{ //n2 > n1
                n1[l--] = n2[j--];
            }
        }
        while(j >= 0){
            n1[l--] = n2[j--];
        }
    }
};
