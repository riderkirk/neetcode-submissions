class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> m;
        int longest = 0;

        for (int n : nums) {
            if (!m[n]) {
                m[n] = m[n-1] + m[n+1] + 1;
                m[n - m[n-1]] = m[n];
                m[n + m[n+1]] = m[n];
                longest = max(longest, m[n]);
            }
        }
        return longest;
    }
};
