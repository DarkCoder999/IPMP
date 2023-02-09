/*
https://leetcode.com/problems/minimum-bit-flips-to-convert-number/description/
*/

class Solution {
public:
    int minBitFlips(int start, int goal) {
        int x = start^goal;
        int c = 0;
        while(x){
            if(x&1) c++;
            x>>=1;
        }
        return c;
    }
};
