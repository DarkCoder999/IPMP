//https://leetcode.com/problems/product-of-array-except-self/description/
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix(nums), suffix(nums), res(nums.size());
        partial_sum(prefix.begin(), prefix.end(), prefix.begin(), multiplies<int>());
        partial_sum(suffix.rbegin(), suffix.rend(), suffix.rbegin(), multiplies<int>());
        for(int i = 0; i < nums.size(); i++)
            res[i] = (i ? prefix[i-1] : 1) * (i+1 < nums.size() ? suffix[i+1] : 1);
        return res;
    }
};
