class Solution {
    string sorted(string str) {
        sort(str.begin(), str.end());
        return str;
    }
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        bool b = true;
        for (auto s : strs) {
            for (auto& v : result) {
                if (sorted(v[0]) == sorted(s)) {
                    v.push_back(s);
                    b = false;
                    break;
                }
            }
            if (b) result.push_back({s});
            b = true;
        }
        return result;
    }
};
