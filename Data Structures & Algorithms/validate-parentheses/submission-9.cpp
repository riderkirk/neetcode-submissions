class Solution {
public:
    bool isValid(const string& s) {
        if (s.size() % 2 == 1) return false;
        std::vector<int> st;
        for (char c : s) {
            if (c == ')' || c == '}' || c == ']') {
                char expected = 
                    (c == ')') ? '(' :
                    (c == ']') ? '[' : '{';
                if (!st.empty() && st.back() == expected) {
                    st.pop_back();
                } else {
                    return false;
                }
            } else {
                st.push_back(c);
            }
        }
        return st.empty();
    }
};
