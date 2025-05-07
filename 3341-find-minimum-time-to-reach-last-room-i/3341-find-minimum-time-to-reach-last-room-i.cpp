class Solution {
public:
#define pipi pair<int,pair<int,int>> 
    vector<pair<int,int>> direction = {{1,0},{0,1},{-1,0},{0,-1}};
    int minTimeToReach(vector<vector<int>>& moveTime) {
        priority_queue<pipi,vector<pipi>,greater<pipi>> ppq;
        int n = moveTime.size();
        int m = moveTime[0].size();
        vector<vector<int>> result(n,vector<int>(m,INT_MAX));
        result[0][0] = 0;
        ppq.push({0,{0,0}});
        while(!ppq.empty()){
            auto t = ppq.top();
            ppq.pop();
            int d = t.first;
            int x = t.second.first;
            int y = t.second.second;
            for(auto dir)
        }
    }
};