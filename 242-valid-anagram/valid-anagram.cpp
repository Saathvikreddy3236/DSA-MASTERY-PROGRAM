class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
            return false;
        if(s.length() == 1 && s!=t)
            return false;
        else if(s.length() == 2 && (s[0]!=t[1] || s[1]!=t[0]))
            return false;
        vector<int> v(26);
        for(int i=0;i<s.size();i++)
            v[s[i]-'a']++;
        for(int i=0;i<s.size();i++)
            v[t[i]-'a']--;
        for(int i=0;i<26;i++)
            if(v[i]!=0)
                return false;
        return true;
    }
};