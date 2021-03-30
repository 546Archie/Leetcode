class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int len = strs.size();
        string ret = "";
        if(len==0)
            return ret; 
        int strlen = strs[0].length();
        int i, j;
        for(i = 0 ; i < strlen ; i++){
            for(j = 1 ; j < len ; j++){
                if(strs[j].length()==0)
                    return "";
                if(strs[j][i]!=strs[j-1][i])
                    return ret;
            }
            ret += strs[j-1][i];
        }
        return ret;
    }
};
