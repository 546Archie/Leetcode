#include <iostream>
#include <string>
class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans = 0;
        int l = s.length()-1;
        for(l ; l >= 0 ; l--){
            if(s[l]!=' '){
                ans++;
            }
            else if(ans!=0)
                break;
        }
        return ans;
    }
};
