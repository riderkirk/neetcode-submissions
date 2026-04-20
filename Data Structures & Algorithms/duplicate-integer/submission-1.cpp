class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,bool> m;
        for (const int& n : nums) {
            if (m[n]) return true;
            else m[n] = true;
        }
        return false;
    }
};