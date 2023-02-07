/*
https://leetcode.com/problems/search-in-rotated-sorted-array/description/
Problem 33
*/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, h = nums.size()-1;
        while(l<=h){
            int mid = l+(h-l)/2;
            if(nums[mid] == target)
                return mid;
            else if(nums[l]==target)
                return l;
            else if(nums[h]==target)
                return h;
            if((nums[mid]>target && nums[h]>target) || (nums[mid]<target && nums[h]>target))
                l=mid+1;
            else
                h=mid-1;
        }
        return -1;
    }
};
