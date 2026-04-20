class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> counts;
        for (const auto& n : nums) {
            counts[n]++;
        }
        vector<vector<int>> v(nums.size()+1);
        for (const auto& [n, count] : counts) {
            v[count].push_back(n);
        }
        vector<int> result;
        for (int i = nums.size(); i >= 0; i--) {
            for (const auto& n : v[i]) {
                result.push_back(n);
                if (result.size() == k) return result;
            }
        }
        return result;
    }
};
