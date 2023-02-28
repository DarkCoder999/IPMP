//https://leetcode.com/problems/3sum/description/
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin() , nums.end());  
        if(nums.size() < 3 || nums[0] > 0)   
            return {};
        vector<vector<int>> res;
        for(int i = 0 ; i < nums.size() ; ++i){     
            if(nums[i] > 0)     
                break;
            if(i > 0 && nums[i] == nums[i - 1])   
                continue;
            int l = i + 1 , r = nums.size() - 1;   
            int s = 0;
            while(l < r){                          
                s = nums[i] + nums[l] + nums[r];
                if(s > 0)
                    r--;
                else if(s < 0)
                    l++;
                else {
                    res.push_back({nums[i] , nums[l] , nums[r]});  
                    int lastlow = nums[l] , lasthigh = nums[r];  
                    while(l < r && nums[l] == lastlow){l++;}
                    while(l < r && nums[r] == lasthigh){r--;}
                }
            }
        }
        return res;
    }
};
