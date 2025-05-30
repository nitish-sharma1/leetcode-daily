class Solution {
public:
    string smallestNumber(string pattern) {
        int n = pattern.size();
        string num="";
        int count = 1;
        stack<char> st;
        for(int i = 0 ; i <=  n ; i++){
            st.push(count + '0');
            count++;
            if(i==n || pattern[i] == 'I'){
                while(!st.empty()){
                    num += st.top();
                    st.pop();
                }
            }
        }
        return num;
    }
};