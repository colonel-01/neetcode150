
class Solution {
public:
    string minWindow(string s, string t) {
        if (t.size() > s.size()) return "";

        unordered_map<char, int> mp;

        for (char c : t) {
            mp[c]++;
        }

        int i = 0, j = 0;
        int required = t.size();

        int start = 0;
        int count = INT_MAX;

        while (j < s.size()) {

            // Expand the window
            if (mp[s[j]] > 0) {
                required--;
            }

            mp[s[j]]--;

            // Window is valid
            while (required == 0) {

                // Update minimum window
                if (j - i + 1 < count) {
                    count = j - i + 1;
                    start = i;
                }

                // Shrink the window
                mp[s[i]]++;

                if (mp[s[i]] > 0) {
                    required++;
                }

                i++;
            }

            j++;
        }

        if (count == INT_MAX) return "";

        return s.substr(start, count);
    }
};
