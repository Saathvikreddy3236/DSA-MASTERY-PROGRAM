class Solution {
public:
    string reverseWords(string s) {
        string k = "";
        string t = "";

        for (int i = 0; i < s.length(); i++) {
            if (s[i] != ' ') {
                t += s[i];
            }
            else if (!t.empty()) {
                k = t + (k.empty() ? "" : " " + k);
                t = "";
            }
        }
        if (!t.empty()) {
            k = t + (k.empty() ? "" : " " + k);
        }

        return k;
    }
};