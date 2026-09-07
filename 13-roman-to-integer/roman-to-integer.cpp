class Solution {
public:
    int romanToInt(string s) {
        map<string, int> m{{"I", 1},   {"IV", 4},   {"V", 5},   {"IX", 9},
                           {"X", 10},  {"XL", 40},  {"L", 50},  {"XC", 90},
                           {"C", 100}, {"CD", 400}, {"D", 500}, {"CM", 900},
                           {"M", 1000}};
        int sum = 0, f = 0;
        for (int i = 0; i < s.length(); i++) {
            string c = "";
            c += s[i];
            if (i + 1 < s.length()) {
                c += s[i + 1];
                if (m.contains(c)) {
                    sum += m[c];
                    i++;
                    continue;
                }
                c.pop_back();
            }
            sum += m[c];
        }
        return sum;
    }
};