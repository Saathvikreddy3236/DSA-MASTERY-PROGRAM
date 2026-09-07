class Solution {
public:
    string frequencySort(string s) {
        if (s.length() <= 2)
            return s;

        vector<int> v(256, 0);

        for (char c : s)
            v[c]++;

        multimap<int, char> ml;

        for (int i = 0; i < 256; i++) {
            if (v[i] > 0)
                ml.insert({v[i], (char)i});
        }
        s="";
        for (auto it = ml.rbegin(); it != ml.rend(); ++it) {
            int n = it->first;
            for (int i = 0; i < n; i++)
                s += it->second;
        }
        return s;
    }
};