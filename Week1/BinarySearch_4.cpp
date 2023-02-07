#floor
int find_floor(vector<int>& nums, int x){
    auto itr = lower_bound(nums.begin(), nums.end(),x);
    int floor = itr - nums.begin();
    if (nums[floor] > x)
        return nums[floor - 1];
    else
        return nums[floor];
}
#ceil 
int find_ceil(vector<int>& nums, int x){
  auto itr = upper_bound(nums.begin(), nums.end(),x);
  int ceil = itr - nums.begin();
  if (nums[ceil] > x && nums[ceil - 1] == x)
      return nums[ceil - 1];
  else
      return nums[ceil];
}
