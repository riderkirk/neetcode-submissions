class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n = len(nums)
        output = [1] * n
        lacc = 1
        racc = 1
        for i in range(1,n):
            lacc *= nums[i-1]
            racc *= nums[n-i]
            output[i] *= lacc
            output[n - 1 - i] *= racc
        return output