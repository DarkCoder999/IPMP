class Solution {
public:
    void all_permutate(string s1, string s2) {
        sort(s1.begin(), s1.end());
        do{
            cout<<s1<<"\n";
        }while(next_permutation(s1.begin(), s1.end()));
    }
};
