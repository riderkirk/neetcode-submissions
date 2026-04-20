class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size()!=t.size()) return false;
        for (auto c : "abcdefghijklmnopqrstuvwxyz") {
            if (count(s.begin(), s.end(), c) != count(t.begin(), t.end(), c)) {
                return false;
            }
        }
        return true;
    }
};
