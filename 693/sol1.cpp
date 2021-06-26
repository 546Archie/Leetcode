class Solution {

public:

    bool hasAlternatingBits(int n) {

        int pre = n;

        int cur = pre;

        pre = pre & 1;

        while(cur!=0){

            cur = cur>>1;

            if((cur&1)==pre){

                return false;

            }

            else{

                pre = cur&1;

            }

        }

        return true;

    }

};
