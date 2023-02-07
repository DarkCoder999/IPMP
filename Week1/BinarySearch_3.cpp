/*
https://leetcode.com/problems/majority-element/
Problem 169, similar q
*/

class Solution {
public:
    int bin(vector<int>& a, int l, int h, int k){
        if(l<=h){
            int mid = l+(h-l)/2;
            if(a[mid]==k && (a[mid-1]<k || mid==0))
                return mid;
            if(a[mid]>k)
                return bin(a,l,mid-1,k);
            return bin(a,mid+1,h,k);
        }
        return -1;
    }
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        //sort(nums.begin(), nums.end());
        set<int>s(nums.begin(),nums.end());
        for(auto it:s){
            cout<<it;
            int y = bin(nums,0,n-1,it);
            if(y==-1)
            continue;
            if(y+(n/2)<n && nums[y+(n/2)]==it)
                return it;
        }
        return -1;
    }
};
