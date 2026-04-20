class Solution {
public:
    bool isValid(string s) {
        std::stack<char> st;
        for (char c : s) {
            if (c == ')' || c == '}' || c == ']') {
                char expected = 
                    (c == ')') ? '(' :
                    (c == ']') ? '[' : '{';
                if (!st.empty() && st.top() == expected) {
                    st.pop();
                } else {
                    return false;
                }
            } else {
                st.push(c);
            }
        }
        return st.empty();
    }
};
