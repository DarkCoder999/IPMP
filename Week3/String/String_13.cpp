/**
https://leetcode.com/problems/longest-substring-without-repeating-characters/description/
**/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length(),i=0,r=0;
        vector<int> v(256, -1); 
        for(int j=0;j<n;j++){
            i=max(i,v[s[j]]+1);
            r=max(r,j-i+1);
            v[s[j]]=j;
        }
        return r;
    }
};
