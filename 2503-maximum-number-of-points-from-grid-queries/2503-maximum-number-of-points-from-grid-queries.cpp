class Solution {
public:
int m,n;
vector<pair<int,int>> direction = {{0,1},{1,0},{0,-1},{-1,0}};
void bfs(vector<vector<int>>& grid,int &points,int val){
    int start =0 ;
    int end = 0;
    vector<vector<int>> vis(m,vector<int>(n,0));
    queue<pair<int,int>> q;
    q.push({start,end});
    vis[start][end]=1;
    while(!q.empty()){
        auto t = q.front();
        q.pop();
        points++;
  
        
        int i = t.first;
        int j = t.second;
        for( auto dir : direction){
            int i_ = i+dir.first;
            int j_ = j+dir.second;
   
            if(i_ >=0 && j_ >=0 && i_ < m && j_ < n && !vis[i_][j_] && grid[i_][j_]<val){
                vis[i_][j_] = 1;
               
                q.push({i_,j_});
            }
        }
        
    }

}

    vector<int> maxPoints(vector<vector<int>>& grid, vector<int>& queries) {
         m = grid.size();
     n = grid[0].size();
    vector<int> ans;
        for(int q : queries){
            
            int points = 0 ;
            if(grid[0][0] < q){
                 bfs(grid,points,q);
            }
           
            ans.push_back(points);
            
        }
        return ans;

        
    }
};