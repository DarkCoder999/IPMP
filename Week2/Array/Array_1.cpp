/*
https://leetcode.com/problems/intersection-of-two-arrays/description/
*/
class Solution {
public:
    int binary(vector<int>& a, int l, int h, int k){
        if(l<=h){
            int mid = l+(h-l)/2;
            if(a.at(mid) == k)
            return mid;
            else if(a[mid]>k)
            return binary(a,l,mid-1,k);
            return binary(a,mid+1,h,k);
        }
        else
        return -1;
    }
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> result;
        for(int i=0; i<nums1.size(); i++){
            if((binary(nums2,0,nums2.size()-1,nums1[i])!=-1) && (binary(result,0,result.size()-1,nums1[i])==-1))
            result.push_back(nums1[i]);
        }
        return result;
    }
};
