class Solution {
public:
    string convertToTitle(int col) {
        string ret = "";
        int m, t;
        char c;
        m = col%26;
        t = col/26;
        if(m==0){
            ret = 'Z'+ret;
            t--;
        }
        else{
            c = 65+(m-1);
            ret = c+ ret;
        }
        while(t>0){
            m = t%26;
            t = t/26;
            if(m==0){
                ret = 'Z'+ret;
                t--;
            }
            else{
                c = 65+(m-1);
                ret = c+ ret;
            }
        }
        return ret;
    }
};
