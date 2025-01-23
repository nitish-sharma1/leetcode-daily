class Solution {
public:
    vector<pair<int,int>> direction{{0,1},{0,-1},{1,0},{-1,0}};
    int  dfs(int i , int  j , vector<vector<int>>& grid ,vector<vector<int>>& vis){
        vis[i][j]=1;
        int  m = grid.size();
        int n = grid[0].size();
        
        for(auto dir : direction){
            int i_ = i+dir.first;
            int j_ = j+ dir.second;
            if(i_ >=0 && i_<m && j_ >=0 && j_ <n && !vis[i_][j_] && grid[i_][j_]==1){
                return dfs(i_,j_,grid,vis) +1;
            }
        }
        return 1;
    }
    int countServers(vector<vector<int>>& grid) {
        int  m = grid.size();
        int n = grid[0].size();
        int res = 0 ; 
        vector<vector<int>> vis(m,vector<int>(n,0));
        for( int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                if(!vis[i][j] && grid[i][j]==1){
                    int connected =  dfs(i,j,grid,vis);

                    res += connected == 1 ? 0 : connected ;  
                }
            }
        }
        return res;
    }
};