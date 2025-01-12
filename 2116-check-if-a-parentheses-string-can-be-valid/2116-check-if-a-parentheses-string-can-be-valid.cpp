class Solution {
public:
    bool canBeValid(string s, string locked) {
        int n = s.size();
        stack<char> st;

        //apply validation
        for( int i = 0 ; i < n ; i++)
        {
            if(st.empty() && s[i]==')'){
                if(locked[i]=='0'){
                    st.push('(');
                }
                else{
                    return false;
                }
            }
            else if (!st.empty() && st.top() == '(' && ( s[i] == ')' || locked[i]=='0') ){
                st.pop();
            }
            else {
                st.push(s[i]);
            }
        }

        return st.empty();
    }
};