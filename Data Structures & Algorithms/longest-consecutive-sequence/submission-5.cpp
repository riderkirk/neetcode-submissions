class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if (n < 2) return n;
        set<int> s(nums.begin(), nums.end());
        int longest = 1;
        int current = 1;
        for (auto it = s.begin(); next(it) != s.end(); ++it) {
            auto first = *it;
            auto second = *next(it);
            if (second == first + 1) {
                ++current;
                longest = max(longest, current);
            } else {
                current = 1;
            }
        }
        return longest;
    }
};
