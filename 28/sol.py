#include <string.h>
class Solution {
public:
    int strStr(string haystack, string needle) {
        size_t pos = haystack.find(needle);
        if(pos==string::npos)
            return -1;
        else
            return pos;
    }
};
