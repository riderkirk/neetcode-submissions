class MinStack {
    vector<int>st;
    vector<int>ms;
public:
    MinStack() {
    }

    void push(int val) {
        if (ms.empty() || val <= ms.back()) {
            ms.push_back(val);
        }
        st.push_back(val);
    }
    
    void pop() {
        if (st.back() == ms.back()) {
            ms.pop_back();
        }
        st.pop_back();
    }
    
    int top() {
        return st.back();
    }
    
    int getMin() {
        return ms.back();
    }
};
