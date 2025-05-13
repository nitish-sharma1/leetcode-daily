class Solution {
public:
    int lengthAfterTransformations(string s, int t) {
        int m = 1000000007;
        vector<int> mp(26,0);
        for( char ch : s){
            mp[ch -'a']++;
        }
        while(t--){
           vector<int> temp(26,0);
           for(int i = 0 ; i < 26;i++){
            char ch = i + 'a';
            int freq = mp[i];
            if(ch != 'z' ){
                temp[(ch+1) -'a'] = (temp[(ch+1) -'a'] + freq) %m;
            }
            else{
                temp[0] = (temp[0]+freq)%m;
                temp[1] = (temp[1]+freq)%m;
            }
           }
           mp = move(temp);
        }
        int res = 0 ;
        for(int val : mp){
            res = (res +val) %m;
        }
        return res;
    }
};