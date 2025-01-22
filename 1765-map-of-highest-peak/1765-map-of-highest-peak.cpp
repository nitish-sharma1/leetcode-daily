class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        int m = isWater.size();
        int n = isWater[0].size();
        queue<pair<int,int>> q;
        vector<vector<int>> res(m,vector<int>(n,-1));
        for( int i = 0 ;i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                if(isWater[i][j]){
                    res[i][j]=0;
                    q.push({i,j});
                }
                
            }
        }

        vector<pair<int,int>> direction{{0,-1},{1,0},{0,1},{-1,0}};
       while(!q.empty()){
        int N = q.size();
        while(N--){
            auto curr = q.front();
            q.pop();
            int i = curr.first;
            int j = curr.second;
            for( auto dir : direction){
                int x_ = i+dir.first;
                int y_ = j+dir.second;
                if(x_>=0 && x_ <m && y_>=0 && y_<n && res[x_][y_] == -1){
                    res[x_][y_] = res[i][j]+1;
                    q.push({x_,y_});
                }
            }
        }
       }
        return res;
    }
};