class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if (n < 2) return n;

        sort(nums.begin(), nums.end());

        int result = 1;
        int current = 1;
        for (int i = 1; i < n; ++i) {
            if (nums[i] == nums[i-1]) continue;
            if (nums[i] == (nums[i-1] + 1)) {
                ++current;
                result = max(result,current);
            } else {
                current = 1;
            }
        }
        return result;
    }
};
