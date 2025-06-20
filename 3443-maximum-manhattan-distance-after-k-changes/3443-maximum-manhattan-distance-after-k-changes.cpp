class Solution {
public:
    int maxDistance(string s, int k) {
        unordered_map<char,int> mp;
        int maxMD = 0;
        for(int i = 0 ; i <s.size();i++){
            mp[s[i]]++;
            int currMD = abs(mp['E'] - mp['W']) + abs(mp['N'] - mp['S']);
            int steps = i+1;
            int wasted = steps - currMD;
            int extra =0;
            if(wasted){
                extra = min(2*k , wasted);
            }
            int finalMD = currMD + extra;
            maxMD = max(maxMD , finalMD);

        }
        return maxMD;
    }
};