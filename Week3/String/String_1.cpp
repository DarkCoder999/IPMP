/**
https://leetcode.com/problems/reverse-string/description/
**/

#Two Pointer method
class Solution {
public:
    void reverseString(vector<char>& s) {
        int l = 0, h = s.size()-1;
        char temp;
        while(l<=h){
            temp = s[l];
            s[l++] = s[h];
            s[h--] = temp;
        }
    }
};

#Recursive reversal
class Solution {
public:
    void rev(vector<char>& s, int x,int y){
        if(x==s.size()/2) return;
        rev(s,x+1,y-1);
        char temp = s[x];
        s[x] = s[y];
        s[y] = temp;
    }
    void reverseString(vector<char>& s) {
        rev(s,0,s.size()-1);
    }
};
