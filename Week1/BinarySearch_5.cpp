/*
https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
Problem 34
*/

class Solution {
public:
    int bin1(vector<int>& a, int l, int h, int k){
        while(l<=h){
            int mid = l+(h-l)/2;
            if(a[mid]==k && (a[mid-1]<k || mid==l))   //need to analyse 
                return mid;
            if(a[mid]>k)
                h = mid-1;
            else
                l = mid+1;
        }
        return -1;
    }
    int bin2(vector<int>& a, int l, int h, int k){
        while(l<=h){
            int mid = l+(h-l)/2;
            if(a[mid]==k && (a[mid+1]>k || mid==h))
                return mid;
            if(a[mid]>k)
                h = mid-1;
            else
                l = mid+1;
        }
        return -1;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> l;
        int n = nums.size()-1;
        int l1 = bin1(nums,0,n,target);
        int l2 = bin2(nums,0,n,target);
        l.push_back(l1);
        l.push_back(l2);
        return l;
    }
};
