class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> m;
        for (const auto& s : strs) {
            vector<int> count(26,0);
            for (const char& c : s) {
                count[c-'a']++;
            }
            string key;
            for (const int& c : count) {
                key += to_string(c) + ',';
            }
            m[key].push_back(s);
        }
        vector<vector<string>> result;
        for (const auto& p : m) {
            result.push_back(p.second);
        }
        return result;
    }
};
