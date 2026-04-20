class MinStack {
    int m;
    vector<int>st;
    vector<int>ms;
public:
    MinStack() : m{std::numeric_limits<int>::max()} {
    }

    void push(int val) {
        if (val <= m) {
            m = val;
            ms.push_back(m);
        }
        st.push_back(val);
    }
    
    void pop() {
        if(st.back() == m) {
            ms.pop_back();
            m = ms.back();
        }
        st.pop_back();
        if(st.empty()) m = std::numeric_limits<int>::max();
    }
    
    int top() {
        return st.back();
    }
    
    int getMin() {
        return m;
    }
};
