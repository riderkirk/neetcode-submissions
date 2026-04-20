class Solution {
public:

    string encode(vector<string>& strs) {
        if (strs.empty()) return "";
        string result;
        for (const auto& s : strs) {
            result.append(to_string(s.length()) + ";" + s);
        }
        return result;
    }

    vector<string> decode(string s) {
        if (s.empty()) return {};
        vector<string> result;
        int i = 0;
        while (i < s.length()) {
            auto j = s.find(';',i);
            int len = stoi(s.substr(i,j-i));
            i = j + 1;
            result.emplace_back(s.substr(i,len));
            i += len;
        }
        return result;
    }
};
