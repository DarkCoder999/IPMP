//https://leetcode.com/problems/maximum-difference-between-increasing-elements/description/
class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int min_el = INT_MAX, maxv = INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i] < min_el) min_el = nums[i];
            else{
                int diff = nums[i] - min_el;
                if(diff > 0 && diff > maxv) maxv = nums[i] - min_el;
            }
        }
        if(maxv!=INT_MIN) return maxv;
        return -1;
    }
};
