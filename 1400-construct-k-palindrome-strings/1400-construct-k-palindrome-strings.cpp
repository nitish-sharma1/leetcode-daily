class Solution {
public:
    bool canConstruct(string s, int k) {
        int n = s.size();
        //map bana lo freq count ka 
        unordered_map<char,int> mp;
        if(n == k ){
            return true;
        }
        if(k>n){
            return false;
        }
        for( char ch : s){
            mp[ch]++;
        }
        int countodd=0;
        for(auto it : mp){
            if(it.second %2 !=0){
                countodd += it.second;
            }
        }
        return countodd <= k;
    }
};