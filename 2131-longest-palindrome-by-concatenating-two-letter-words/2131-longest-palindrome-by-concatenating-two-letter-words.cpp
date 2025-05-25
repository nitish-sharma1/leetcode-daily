class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_set<string> st;
        int res = 0 ;
        for(auto word : words){
            string rev = "";
            rev.push_back(word[1]);
            rev.push_back(word[0]);
            if(st.count(rev) > 0){
                res +=4;
                st.erase(rev);
            }
            else{
                st.insert(word);
            }
        }
        for( auto it : st){
            if(it[0]==it[1]){
                res+=2;
                break;
            }
        }
        return res;
    }
};