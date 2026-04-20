class Solution {
public:
    bool isValid(string s) {
        vector<char> v;
        for (const char& c : s) {
            if (v.empty()) {
                if (c == ')' || c == ']' || c == '}') 
                    return false;
                v.push_back(c);
            } else if (c == '(' || c == '[' || c == '{') {
                v.push_back(c);
            } else if (v.back() == '(' && c == ')' ||
                       v.back() == '[' && c == ']' ||
                       v.back() == '{' && c == '}') {
                v.pop_back();
            } else {
                return false;
            }
        }
        return v.empty();
    }
};
