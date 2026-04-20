class MinStack {
    std::vector<std::pair<int, int>> st;

public:
    void push(int val) {
        int currentMin = st.empty() ? val : std::min(val, st.back().second);
        st.emplace_back(val, currentMin);
    }
    
    void pop() {
        st.pop_back();
    }
    
    int top() const {
        return st.back().first;
    }
    
    int getMin() const {
        return st.back().second;
    }
};