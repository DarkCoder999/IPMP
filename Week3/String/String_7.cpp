/**
https://leetcode.com/problems/string-compression/description/
**/
class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char> v = {chars[0]};
        vector<int> c = {1};
        int count = 1,j=0;
        for(int i = 1; i<chars.size(); i++){
            if(chars[i-1]!=chars[i]){
                v.push_back(chars[i]);
                count=1;
                c.push_back(count);
                j++;
            }
            else{
                count++;
                c[j] = count;
            }
        }
        string x = "";
        for(int i=0;i<v.size();i++){
            if(c[i]!=1)
                x+=((v[i])+to_string(c[i]));
            else
                x+=v[i];
        }
        
        for(int i=0;i<x.length();i++)
        chars[i]=x[i];
        return x.length();
    }
};
