class Solution {
public:
    int appendCharacters(string s, string t) {
        int first = 0, second  = 0;
        int sLength = s.length();
        int tLength = t.length();

        while(first<sLength && second<tLength) {
            if(s[first]==t[second]) {
                first++;
                second++;
            }else {
                first++;
            }
        }

        if(second==tLength && first<=sLength) {
            return 0;
        }

        return tLength - second;
    }
};