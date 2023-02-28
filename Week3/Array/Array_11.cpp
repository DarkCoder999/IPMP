//https://leetcode.com/problems/4sum/description/
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        if(nums.size()<4) return {};
        vector<vector<int>> v;
        set<vector<int>> s;
        for(int i=0;i<nums.size()-3;i++){
            for(int j=i+1;j<nums.size()-2;j++){
                int l = j+1, r = nums.size()-1;
                while(l<r){
                    long long sum = (long long)nums[i]+(long long)nums[j]+(long long)nums[l]+(long long)nums[r];
                    if(sum>target) r--;
                    else if(sum<target) l++;
                    else s.insert({nums[i],nums[j],nums[l++],nums[r--]});
                }
            }
        }
        for(auto it:s)
        v.push_back(it);
        return v;
    }
};
