/**
https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/
**/
class Solution {
public:
    void computeLPSArray(string pat, int m, int* lps) {
        int len = 0, i = 1;
        lps[0] = 0; 
        while (i < m) {
            if (pat[i] == pat[len]) {
                len++;
                lps[i] = len;
                i++;
            }
            else {
                if (len != 0)
                    len = lps[len - 1];
                else {
                    lps[i] = 0;
                    i++;
                }
            }
        }
    }
    int KMP(string pat, string txt){
        int m = pat.length(), n = txt.length(), i = 0, j = 0;
        int lps[m];
        computeLPSArray(pat, m, lps); 
        while ((n - i) >= (m - j)) {
            if (pat[j] == txt[i]) {
                j++;
                i++;
            }
            if (j == m) {
                return i-j;
                j = lps[j - 1];
            }
            else if (i < n && pat[j] != txt[i]) {
                if (j != 0)
                    j = lps[j - 1];
                else
                    i = i + 1;
            }
        }
        return -1;
    }
    int strStr(string haystack, string needle) {
        int res = KMP(needle, haystack);
        return res;
    }
};
