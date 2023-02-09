/*
https://leetcode.com/problems/sort-an-array/description/
Prb 912
*/
class Solution {
public:
    void merge(vector<int>& arr, int l, int m, int r){
        int i,j,k,a=m-l+1,b=r-m;
        vector<int> lt;
        vector<int> rt;
        for(i=0;i<a;i++)
        lt.push_back(arr[i+l]);
        for(j=0;j<b;j++)
        rt.push_back(arr[m+1+j]);
        i=0;j=0;k=l;
        while(i<a && j<b){
            if(lt[i]<=rt[j])
            arr[k++]=lt[i++];
            else
            arr[k++]=rt[j++];
        }
        while(i<a)
        arr[k++]=lt[i++];
        while(j<b)
        arr[k++]=rt[j++];
    }
    void mergesort(vector<int>& arr, int l, int h){
        if(l<h){
            int mid=l+(h-l)/2;
            mergesort(arr,l,mid);
            mergesort(arr,mid+1,h);
            merge(arr,l,mid,h);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums, 0, nums.size()-1);
        return nums;
    }
};
