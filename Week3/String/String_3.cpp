/**
https://leetcode.com/problems/first-unique-character-in-a-string/
**/
class Solution {
public:
    int firstUniqChar(string s) {
        for(int i=0;i<s.length();i++){
            if(s.find(s[i], s.find(s[i])+1) == string::npos)
                return i;
        }
        return -1;
    }
};
