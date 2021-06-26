class Solution {

public:

    bool hasAlternatingBits(int n) {

        long long new_n = n;

        new_n = (new_n>>1) + new_n;

        if(new_n&(new_n+1)){

            return false;

        }

        return true;

    }

};
