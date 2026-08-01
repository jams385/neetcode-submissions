class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashmap = {}

        for index, value in enumerate(nums):
            difference = target - value

            if difference in hashmap:
                return [hashmap[difference], index]
            else:
                hashmap[value] = index
        return []
