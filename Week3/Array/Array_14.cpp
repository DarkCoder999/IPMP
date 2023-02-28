//https://leetcode.com/problems/first-missing-positive/description/
class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        s = set(nums)
        i = 1
        while n in s:
            i+=1
        return i
