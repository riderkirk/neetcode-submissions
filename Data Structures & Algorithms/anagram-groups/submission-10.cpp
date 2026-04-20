class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        m.reserve(strs.size());
        for (const string& s : strs) {
            string key = s;
            sort(key.begin(), key.end());
            m[key].push_back(s);
        }
        vector<vector<string>> result;
        result.reserve(m.size());
        for (const auto& e : m) {
            result.push_back(move(e.second));
        }
        return result;
    }
};
