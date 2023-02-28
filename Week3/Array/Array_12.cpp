//https://leetcode.com/problems/find-all-duplicates-in-an-array/description/
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        if(nums.empty()) return {};
        vector<int> v;
        for(int i=0;i<nums.size(); i++){
            if(nums[abs(nums[i])-1]<0)
            v.push_back(abs(nums[i]));
            nums[abs(nums[i])-1]=-nums[abs(nums[i])-1];
        }
        return v;
    }
};
