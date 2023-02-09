/*
https://leetcode.com/problems/counting-bits/
*/
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> k;
        for(int j=0;j<=n;j++){
            int c=0, i=j;
            while(i){
                if(i&1) c++;
                i>>=1;
            }
            k.push_back(c);
        }
        return k;
    }
};
