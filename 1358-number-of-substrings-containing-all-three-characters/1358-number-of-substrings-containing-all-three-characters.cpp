class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<char,int> mp;
        int i = 0 ;
        int  j =0;
        int n = s.size();
        int res=0;
        while(i<=n-3 && j<= n){
            if( mp.size()==3){
                res+= n-j+1;
                
                mp[s[i]]--;
                if(mp[s[i]]==0){
                    
                    mp.erase(s[i]);
                }
                 i++;
            }
            else {
                mp[s[j]]++;
                j++;
                
            }
         
        }
        return res;
    }
};