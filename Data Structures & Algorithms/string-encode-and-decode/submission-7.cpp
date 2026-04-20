class Solution {
public:

    string encode(vector<string>& strs) {
        if (strs.empty()) return "";
        string result;
        for (const auto& s : strs) {
            result += to_string(s.length()) + ";" + s;
        }
        return result;
    }

    vector<string> decode(string s) {
        if (s.empty()) return {};
        vector<string> result;
        int i = 0;
        while (i < s.length()) {
            auto j = s.find(';',i);
            int size;
            if (j != string::npos) {
                size = stoi(s.substr(i,j-i));
            }
            i = j + 1;
            result.push_back(s.substr(i,size));
            i += size;
        }
        return result;
    }
};
