/*
https://leetcode.com/problems/single-number/description/
*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int s = nums[0];
        for(int i = 1; i<nums.size(); i++)
            s ^= nums[i];
        return s;
    }
};
