class Solution {
public:

    string encode(vector<string>& strs) {
        if (strs.empty()) return "";
        vector<int> sizes;
        for (const auto& s : strs) {
            sizes.push_back(s.length());
        }
        string result;
        for (const int& s : sizes) {
            result += to_string(s) + ":";
        }
        result += ";";
        for (const auto& s : strs) {
            result += s;
        }
        return result;
    }

    vector<string> decode(string s) {
        if (s.empty()) return {};
        int i = 0;
        vector<int> sizes;
        while (s[i] != ';') {
            string size = "";
            while (s[i] != ':') {
                size += s[i];
                ++i;
            }
            sizes.push_back(stoi(size));
            ++i;
        }
        ++i;
        vector<string> result;
        for (const auto& size : sizes) {
            result.push_back(s.substr(i,size));
            i += size;
        }
        return result;
    }
};
