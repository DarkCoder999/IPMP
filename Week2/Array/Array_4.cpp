/*
https://leetcode.com/problems/single-number-iii/description/
*/
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int s = nums.size();
        if(s==2)
        return nums;
        vector<int> result;
        for(int i = 0; i<s;i++)
        if(count(nums.begin(), nums.end(), nums[i]) == 1)
        result.push_back(nums[i]);
        return result;
    }
};
