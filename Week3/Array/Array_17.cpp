//https://leetcode.com/problems/find-pivot-index/description/

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> left, right;
        int s=0, n=nums.size();
        left.push_back(s);
        for(int i = 1; i< n; i++){
            s+=nums[i-1];
            left.push_back(s);
        }
        s=0;
        right.push_back(0);
        for(int i = n-2; i>=0; i--){
            s+=nums[i+1];
            right.push_back(s);
        }
        for(int i=0;i<n;i++){
            if(left[i] == right[n-i-1]) return i;
        }
        return -1;
    }
};
