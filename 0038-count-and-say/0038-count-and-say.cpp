class Solution {
public:
    string getRLE(string s){
        string ans = "";
        int j = 0 ; 
        int i = 0 ; 
        int n = s.size();
        while(j<=n){
            if(j==n){
                 int chcount = j-i;
                ans.push_back(chcount +'0');
                ans.push_back(s[i]);
               return ans;
            }
            if(s[i]!=s[j]){
                int chcount = j-i;
                ans.push_back(chcount +'0');
                ans.push_back(s[i]);
                i=j;
                continue;
            }
            j++;
        }
        return ans;
    }
    string countAndSay(int n) {
        
        if(n==1){
            return "1";
        }
        string res =  countAndSay(n-1);
        return getRLE(res);
    }
};