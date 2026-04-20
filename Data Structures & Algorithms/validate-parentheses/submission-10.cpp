class Solution {
public:
    bool isValid(const std::string& s) {
        std::vector<char> st;

        for (char c : s) {
            if (c == '(') st.push_back(')');
            else if (c == '[') st.push_back(']');
            else if (c == '{') st.push_back('}');
            else {
                if (st.empty() || st.back() != c) return false;
                st.pop_back();
            }
        }

        return st.empty();
    }
};