class Solution {
public:
    int lengthOfLastWord(string s) {
        int lastWordCount = 0;
        int lastWordEnd = s.length()-1;
        while(lastWordEnd>=0 && s[lastWordEnd]==' ') {
            lastWordEnd--;
        }
        if(lastWordEnd<0) {
            return 0;
        }
        int lastWordBegin = lastWordEnd;
        while(lastWordBegin>=0 && s[lastWordBegin]!=' ') {
            lastWordBegin--;
        }
        if(lastWordBegin<0) {
            return lastWordEnd+1;
        }
        return lastWordEnd-lastWordBegin;

    }
};