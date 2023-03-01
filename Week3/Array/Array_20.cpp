//https://leetcode.com/problems/subarray-sum-equals-k/description/
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        m[0] = 1;
        int s = 0, ans = 0;
        for(int i=0; i<nums.size(); i++){
            s+=nums[i];
            int f = s-k;
            if(m.count(f)>0) ans+=m[f];
            m[s]++;
        }
        return ans;
    }
};
