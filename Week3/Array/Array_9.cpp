/**
https://leetcode.com/problems/two-sum/description/
**/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        map<int, vector<int>> m;
        for(int i=0; i<nums.size(); i++)
            m[nums[i]].push_back(i);
        sort(nums.begin(), nums.end());
        int l = 0, r = nums.size()-1;
        while(l<r){
            if(nums[l]+nums[r]==target){
                if(nums[l]==nums[r]){
                    res.push_back(m[nums[l]][0]);
                    res.push_back(m[nums[l]][1]);
                }
                else{
                    res.push_back(m[nums[l]][0]);
                    res.push_back(m[nums[r]][0]);
                }
                break;
            }
            else if(nums[l]+nums[r]>target)
                r--;
            else l++;
        }
        return res;
    }
};
