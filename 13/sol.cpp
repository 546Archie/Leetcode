#include "map"
#include "string.h"
class Solution {
public:
    int romanToInt(string s) {
        map<char, int> rom;
        rom['I'] = 1;
        rom['V'] = 5;
        rom['X'] = 10;
        rom['L'] = 50;
        rom['C'] = 100;
        rom['D'] = 500;
        rom['M'] = 1000;
        int len = s.length();
        int sum = rom[s[len-1]];
        for(int i = len-2 ; i >=0 ; i--){
            if(rom[s[i]] < rom[s[i+1]])
                sum -= rom[s[i]];
            else
                sum += rom[s[i]];
        }
        return sum;
    }
};
