class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        for (const string& s : strs) {
            string sorted_s = s;
            sort(sorted_s.begin(), sorted_s.end());
            m[sorted_s].push_back(s);
        }
        vector<vector<string>> result;
        for (auto p : m) result.push_back(p.second);
        return result;
    }
};
