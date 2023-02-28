//https://leetcode.com/problems/increasing-triplet-subsequence/description/
class Solution {
public:
    vector<vector<int>> increasingTriplet(vector<int>& nums) {
        int min_el = nums[0], max_s = INT_MAX, st_min = min_el;
        vector<vector<int>> v;
        for(int i=1; i<nums.size();i++){
            if(nums[i]==min_el) continue;
            else if(nums[i]<min_el){
                min_el = nums[i];
                continue;
            }
            else if(nums[i]<=max_s){
                max_s = nums[i];
                st_min = min_el;
            }
            else
                v.push_back({st_min, max_s, nums[i]});
        }
        return v;
    }
};
