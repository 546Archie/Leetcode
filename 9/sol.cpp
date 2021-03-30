#include "string.h"
class Solution {
public:
    bool isPalindrome(int x) {
        string in = to_string(x);
        int head = 0, tail = in.length()-1, mid;
        if((head+in.length())>>1)
            mid = (head+in.length()+1)/2;
        else
            mid = (head+in.length())/2;
        for(head; head < mid ; head++){
            if(in[head]!=in[tail])
                return false;
            tail--;
        }
        return true;
    }
};
