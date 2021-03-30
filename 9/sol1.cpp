#include "string.h"
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        //rhalf: reverse half
        int front = x, back = x, rhalf = 0;
        while(front/10){
            //1464"1"->146"14"
            rhalf = rhalf*10+back%10;
            cout<<"rhalf: "<<rhalf<<endl;
            //1464->146
            back /=10;
            cout<<"back"<<back<<endl;
            //146->1
            front /=100;
            cout<<"front"<<front<<endl;
        }
        return front==0?rhalf==back:back/10==rhalf;
    }
};
