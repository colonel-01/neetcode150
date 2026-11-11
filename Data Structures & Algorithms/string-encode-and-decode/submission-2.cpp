class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";

        for(auto s : strs) {
            res += to_string(s.size()) + "#" + s;
        }

        return res;
    }

    vector<string> decode(string s) {
        vector<string> strs;
        int i = 0;

        while(i < s.size()) {
            int j = i;

            while(s[j] != '#') {
                j++;
            }

            int len = stoi(s.substr(i, j-i));

            string temp = s.substr(j+1, len);

            strs.push_back(temp);

            i = j + 1 + len;
        }

        return strs;
    }
};