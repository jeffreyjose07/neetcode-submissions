class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size()==0 || t.size()==0) {
            return false;
        }
        int first = 0, second = 0;
        while(first<s.length() && second<t.length()) {
            if(s[first]==t[second]) {
                first++;
                second++;
            }else {
                second++;
            }
        }
        if(first==s.length() && second==t.length()) {
            return true;
        }
        return false;
    }
};