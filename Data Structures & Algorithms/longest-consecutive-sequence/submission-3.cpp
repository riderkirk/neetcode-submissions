class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if (n < 2) return n;

        set<int> s(nums.begin(), nums.end());

        int result = 1;
        int current = 1;
        for (auto it = s.begin(); it != s.end(); ++it) {
            const auto first = *it;
            if (next(it) != s.end()) {
                const auto second = *next(it);
                if (second == first + 1) {
                    ++current;
                    result = max(result,current);
                } else {
                    current = 1;
                }
            }
        }
        return result;
    }
};
