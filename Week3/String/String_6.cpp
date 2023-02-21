class Solution {
public:
    string MoveEvenToEnd(string s) {
        string x = "";
        for(int i=0;i<s.length();i+=2)
        x+=s[i];
        for(int i=1;i<s.length();i+=2)
        x+=s[i];
        return x;
    }
};
