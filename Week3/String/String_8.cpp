/**
https://leetcode.com/problems/string-to-integer-atoi/description/
**/
class Solution {
public:
    int myAtoi(string s) {
        double num = 0;
        int i=0,x;
        while(s[i] == ' '){
            i++;
        }
        bool p = s[i] == '+';
        bool n = s[i] == '-';
        p == true ? i++ : i;
        n == true ? i++ : i;
        while(i < s.length() && s[i] >= '0' && s[i] <= '9'){
            x = s[i]-'0';
            num = num*10 + x;
            i++;
        }
        num = n ? -num : num;
        num = (num > INT_MAX) ? INT_MAX : num;
        num = (num < INT_MIN) ? INT_MIN : num;
        return int(num);
    }
};
