class Solution {
public:
    string lexGreaterPermutation(string s, string target) {
        int n = s.size();

        int cnt[26] = {};
        for (char c : s)
            cnt[c - 'a']++;

        string cur;

        for (int i = 0; i < n; i++) {

            int x = target[i] - 'a';
            if (cnt[x] > 0) {
                cur += target[i];
                cnt[x]--;
                continue;
            }
            for (int c = x + 1; c < 26; c++) {

                if (cnt[c] > 0) {
                    cur += char('a' + c);
                    cnt[c]--;

                    for (int k = 0; k < 26; k++) {
                        while (cnt[k] > 0) {
                            cur += char('a' + k);
                            cnt[k]--;
                        }
                    }

                    return cur;
                }
            }
            for (int j = i - 1; j >= 0; j--) {
                cnt[cur[j] - 'a']++;
                for (int c = target[j] - 'a' + 1; c < 26; c++) {

                    if (cnt[c] > 0) {

                        string ans = cur.substr(0, j);

                        ans += char('a' + c);
                        cnt[c]--;
                        for (int k = 0; k < 26; k++) {
                            while (cnt[k] > 0) {
                                ans += char('a' + k);
                                cnt[k]--;
                            }
                        }

                        return ans;
                    }
                }
            }

            return "";
        }
        for (int i = n - 1; i >= 0; i--) {

            cnt[cur[i] - 'a']++;

            for (int c = target[i] - 'a' + 1; c < 26; c++) {

                if (cnt[c] > 0) {

                    string ans = cur.substr(0, i);

                    ans += char('a' + c);
                    cnt[c]--;

                    for (int k = 0; k < 26; k++) {
                        while (cnt[k] > 0) {
                            ans += char('a' + k);
                            cnt[k]--;
                        }
                    }

                    return ans;
                }
            }
        }

        return "";
    }
};