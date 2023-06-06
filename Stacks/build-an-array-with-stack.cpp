#https://leetcode.com/problems/build-an-array-with-stack-operations/description/
class Solution {
public:
    bool bin(vector<int> a, int l, int r, int k){
        if(l<=r){
            int mid=l+(r-l)/2;
            if(a[mid]==k) return true;
            if(a[mid]>k) return bin(a,l,mid-1,k);
            return bin(a,mid+1,r,k);
        }
        return false;
    }
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> v;
        int c=0;
        if(target[0] > n) return v;
        for(int i=1; i<=n; i++){
            v.push_back("Push");
            c++;
            if(bin(target, 0, target.size()-1, i) == false){
                v.push_back("Pop");
                c--;
            }
            if(target.size() == c)
                break;
        }
        return v;
    }
};
