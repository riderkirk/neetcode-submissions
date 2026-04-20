class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); ++i) {
            if(m.find(nums[i]) != m.end()) m[nums[i]]++;
            else m[nums[i]] = 1;
        }
        vector<vector<int>> freq(nums.size()+1);
        for (auto [n,c] : m) {
            freq[c].push_back(n);
        }
        vector<int> result;
        for (int i = nums.size(); i >= 0; --i) {
            for (auto n : freq[i]) {
                result.push_back(n);
                if (result.size() >= k) return result;
            }
        }
        return result;
    }
};
