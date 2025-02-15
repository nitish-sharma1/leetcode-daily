class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        n =len(nums)
        mp = dict()
        for i in range(n):
            num = target - nums[i]
            if num in mp.keys():
                return([i,mp[num]])
            mp[nums[i]] = i
        return []