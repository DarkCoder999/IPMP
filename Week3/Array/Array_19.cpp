//https://practice.geeksforgeeks.org/problems/two-numbers-with-sum-closest-to-zero1737/1
class Solution
{
    public:
        int closestToZero(int arr[], int n)
        {
            sort(arr, arr+n);
            if(arr[n-1] < 0) return arr[n-1]+arr[n-2];
            else if(arr[0] >= 0) return arr[0]+arr[1];
            int l = 0, r = n-1, s, ans = INT_MAX;
            while(l<r){
                s = arr[l]+arr[r];
                if(ans >= 0){
                    if(s>=0){
                        if(s<ans) ans = s; }
                    else{
                        if(abs(s) == ans);
                        else if(abs(s)<ans) ans =s;
                    }
                }
                else{
                    if(s>=0){
                        if(s<=abs(ans)) ans = s;
                    }
                    else{
                        if(abs(s)<abs(ans)) ans =s;
                    }
                }
                if(s<0) l++;
                else r--;
            }
            return ans;
        }
};
