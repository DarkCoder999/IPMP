#Two numbers with odd occurrences in unsorted array

vector<int> two_odd_occurrences(vector<int>& nums) {
    vector<int> result;
    int n = nums.size(), x = nums[0], a=0, b=0;
    for(int i = 1; i<n;i++)
    x ^= nums[i];
    int setbit = x & ~(x-1);
    for(int i = 0; i<n; i++){
        if(nums[i] & setbit)
        a ^= nums[i];
        else
        b ^= nums[i];
    }
    result.push_back(a);
    result.push_back(b);
    return result;
}
