#https://leetcode.com/problems/minimum-absolute-difference/description/

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int minel = INT_MAX;
        for(int i=1;i<arr.size();i++){
            minel = min(arr[i]-arr[i-1], minel);
        }
        vector<vector<int>> v;
        for(int i=1;i<arr.size();i++){
            if(arr[i]-arr[i-1] == minel)
            v.push_back({arr[i-1], arr[i]});
        }
        return v;
    }
};
