class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        unordered_map<int,vector<int>> ctb;
        unordered_map<int,int> btc;
        vector<int> ans;
        for( auto q : queries){
            int color = q[1];
            int ball = q[0];

            ctb[color].push_back(ball);
            if(btc.count(ball) > 0 ){
                auto v = ctb[btc[ball]];
                v.erase(find(v.begin(), v.end(), ball));
                if(v.size() == 0){
                    ctb.erase(btc[ball]);
                }
            }
            btc[ball] =color;
            ans.push_back(ctb.size());
        }
        return ans;
    }
};