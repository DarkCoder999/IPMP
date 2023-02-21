class Solution{
public:
    string getDuplicateLetters(string s) {
        unordered_map <char, int> c;
        for(int i=0;i<s.length();i++)
        c[s[i]]++;
        string x = "";
        for(auto& it : c){
            if(it.second > 1)
            x+=it.first;
        }
        return x;
    }
};
