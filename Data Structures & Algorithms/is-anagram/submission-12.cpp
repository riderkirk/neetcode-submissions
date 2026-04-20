#include <array>

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        array<int,26> a{};
        for (int i = 0; i < s.size(); ++i) {
            a[s[i]-'a']++;
            a[t[i]-'a']--;
        }
        for (const int& i : a) {
            if (i != 0) {
                return false;
            }
        }
        return true;
    }
};
