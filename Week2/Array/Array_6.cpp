/*
https://leetcode.com/problems/sum-of-square-numbers/description/
*/
class Solution {
public:
    bool judgeSquareSum(int c) {
        double i = 0;
        while (c - i*i >= 0) {
            int x = c - i*i;
            double y = sqrt(x);
            if (y == floor(y)) {
                return true;
            }
            i++;
        }
        return false;
    }
};
