class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        for (int i = 0; i < nums.size(); ++i) {
            auto pos = m.find(target - nums[i]);
            if (pos != m.end()) return {pos->second,i};
            m[nums[i]] = i;
        }
        return {};
    }
};
