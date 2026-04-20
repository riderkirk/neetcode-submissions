from itertools import accumulate
import operator

class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        left = [1] + list(accumulate(nums[:-1],operator.mul))
        right = [1] + list(accumulate(nums[::-1][:-1],operator.mul))
        return [lacc * racc for lacc, racc in zip(left,reversed(right))]
        