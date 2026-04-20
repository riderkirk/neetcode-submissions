class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        for (auto n : nums) {
            if (count(nums.begin(), nums.end(), n) > 1) return true;
        }
        return false;
    }
};