class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size()==0) {
            return true;
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
        if(first==s.length()) {
            return true;
        }
        return false;
    }
};