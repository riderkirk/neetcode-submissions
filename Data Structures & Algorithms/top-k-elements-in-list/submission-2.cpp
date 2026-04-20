class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> num_counts;
        for (const int& n : nums) {
            if (num_counts.find(n) != num_counts.end()) ++num_counts[n];
            else num_counts[n] = 1;
        }
        vector<vector<int>> frequencies(nums.size() + 1);
        for (const auto& [n,c] : num_counts) 
            frequencies[c].push_back(n);
        vector<int> result;
        for (auto i = nums.size(); i >= 0; --i) {
            for (const auto& n : frequencies.at(i)) {
                result.push_back(n);
                if (result.size() == k) return result;
            }
        }
        return result;
    }
};
