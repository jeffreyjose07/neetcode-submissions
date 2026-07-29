class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<int>st;
        for(string log : logs) {
            if(log[0]=='.'){
                if(log[1]=='.') {
                    if(!st.empty()) {
                        st.pop();
                    }
                }
            }else{
                st.push(1);
            }
        }
        return st.size();
    }
};